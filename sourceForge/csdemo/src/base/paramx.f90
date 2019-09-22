module paramx
    use,intrinsic :: iso_c_binding
    ! ----------------total variables
    implicit none

    integer, bind(c) ::        ii 
    integer, bind(c) ::        jj
    integer, bind(c) ::        kk
end module paramx