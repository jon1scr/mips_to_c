s32 test(s32 arg0) {
    u32 temp_t6;
    s32 phi_a0;
    s32 phi_a0_2;

    temp_t6 = arg0 - 1;
    if (temp_t6 < 7U) {
        phi_a0_2 = arg0;
        goto **(&jtbl_400150 + (temp_t6 * 4));
    case 0:
        return arg0 * arg0;
    case 1:
        phi_a0_2 = arg0 - 1;
    case 2:
        return phi_a0_2 * 2;
    case 3:
        phi_a0 = arg0 + 1;
        goto block_8;
    default:
        phi_a0 = arg0 * 2;
    } else {
    case 4:
        phi_a0 = arg0 / 2;
    }
block_8:
    D_410170 = phi_a0;
    return 2;
}
