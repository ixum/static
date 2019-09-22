subroutine addfld() bind(C, name="addfld")
    use,intrinsic :: iso_c_binding
    use paramx

    implicit none

    ! Local variables

    integer      i
    integer      j
    integer      k

    write(*, *) "base init ... \n"
    i = 1
    j = 2
    k = 3
    if ( i > 2 ) then
        write(*, *) "i > 2 .. \n"
    else
        j = j - 2
        k = k + 5
        write(*, *) "i < 2 .. \n"
    endif
    write(*, 100) i
    ! write(*, 100) 300
    ! ----------------------------format
    100 format(I4)
    !-----------------------------format end
end subroutine addfld

