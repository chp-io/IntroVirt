find_package(Git)
if(GIT_FOUND)
        execute_process(COMMAND ${GIT_EXECUTABLE} describe --tags --dirty RESULT_VARIABLE res_var OUTPUT_VARIABLE GIT_COM_ID )
        if( NOT ${res_var} EQUAL 0 )
                set( GIT_COMMIT_ID "git commit id unknown")
                message( WARNING "Git failed (not a repo, or no tags). Build will not contain git revision info." )
        endif()
        string( REPLACE "\n" "" GIT_COMMIT_ID ${GIT_COM_ID} )
else()
    set( GIT_COMMIT_ID "unknown (git not found!)")
    message( WARNING "Git not found. Build will not contain git revision info." )
endif()

set( vstring "//version_string.hh - written by cmake. changes will be lost!\n"
             "#define GIT_VERSION \"${GIT_COMMIT_ID}\"\n")

file(WRITE gitversion.h.txt ${vstring} )

# copy the file to the final header only if the version changes
# reduces needless rebuilds
execute_process(COMMAND ${CMAKE_COMMAND} -E copy_if_different
                        gitversion.h.txt ${CMAKE_CURRENT_BINARY_DIR}/gitversion.h)

