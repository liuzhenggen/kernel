MACRO(SUBDIRLIST dirlist dir)
    FILE(GLOB children RELATIVE ${dir} ${dir}/*)
    SET(list "")
    FOREACH(child ${children})
        IF(IS_DIRECTORY ${dir}/${child} AND NOT ${child} STREQUAL "var" AND NOT ${child} STREQUAL "logs")
            LIST(APPEND list ${child})
        ENDIF()
    ENDFOREACH()
    SET(${dirlist} ${list})
ENDMACRO()