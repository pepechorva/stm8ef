; STM8EF Global Configuration File
; Minimal config for STM8S Value Line, defaults with few extras (e.g. NVM)

        EXTNUMPREFIX     = 0    ; Extended number prefix: %: binary, &: decimal
        HAS_CPNVM        = 1    ; Can compile to Flash, always interpret to RAM
        BAREBONES        = 1    ; Remove or unlink some more: hi HERE .R U.R SPACES @EXECUTE AHEAD CALL, EXIT COMPILE [COMPILE]
        WORDS_EXTRACORE  = 1    ; Extra core words: =0 I
