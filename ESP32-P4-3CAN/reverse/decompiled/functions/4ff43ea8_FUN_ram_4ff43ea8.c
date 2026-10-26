/* Firmware entry: 0x4ff43ea8 */

int FUN_ram_4ff43ea8(uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_3 == 0) || (uVar2 = param_3 + 3U & 0xfffffffc, param_1 == 0)) ||
     (uVar12 = *(uint *)(param_1 + 0x10), (uint)(1 << (uVar12 >> 8 & 0x1f)) <= uVar2)) {
    if ((param_2 + 0x10 == 0) || ((param_2 - 1 & param_2) == 0)) {
      return 0;
    }
    goto LAB_ram_4ff4433e;
  }
  if (uVar2 < 0xc) {
    uVar2 = 0xc;
  }
  iVar7 = param_2 + 0x10 + uVar2;
  uVar14 = uVar2;
  if (iVar7 == 0) {
LAB_ram_4ff43ef8:
    if (4 < param_2) {
      return 0;
    }
  }
  else {
    if ((param_2 & param_2 - 1) != 0) goto LAB_ram_4ff4433e;
    uVar1 = -param_2 & iVar7 + (param_2 - 1);
    if ((uint)(1 << (uVar12 >> 8 & 0x1f)) <= uVar1) goto LAB_ram_4ff43ef8;
    if ((4 < param_2) && (uVar14 = uVar1, uVar1 < 0xc)) {
      uVar14 = 0xc;
    }
  }
  uVar1 = uVar12 >> 0x17 & 0xff;
  if (uVar14 < uVar1) {
LAB_ram_4ff43f48:
    uVar8 = 0;
    uVar1 = (int)uVar14 / (int)(uVar1 / (uVar12 >> 0xe & 0x3f));
  }
  else {
    iVar7 = __clzsi2(uVar14);
    uVar13 = uVar12 >> 0x14 & 7;
    uVar8 = 1 << ((0x1f - iVar7) - uVar13 & 0x1f);
    if ((uVar8 - 1 & uVar8) != 0) {
LAB_ram_4ff4433e:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0xf3,"align_up",
                       s_0_____align____align___1_______m_ram_4ff549d4);
    }
    uVar14 = (uVar14 - 1) + uVar8 & -uVar8;
    if (uVar14 < uVar1) goto LAB_ram_4ff43f48;
    iVar7 = -1;
    iVar15 = 0;
    if (uVar14 != 0) {
      iVar15 = __clzsi2(uVar14);
      iVar7 = 0x1f - iVar15;
      iVar15 = 0x20 - iVar15;
    }
    uVar1 = uVar14 >> (iVar7 - uVar13 & 0x1f) ^ 1 << uVar13;
    uVar8 = iVar15 - (uVar12 >> 5 & 7);
  }
  if ((int)(uVar12 & 0x1f) <= (int)uVar8) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar15 = uVar8 * 4;
  if ((-1 << (uVar1 & 0x1f) & *(uint *)(iVar7 + iVar15)) == 0) {
    if ((-1 << (uVar8 + 1 & 0x1f) & *(uint *)(param_1 + 0x18)) == 0) {
      return 0;
    }
    iVar15 = __ffssi2();
    uVar8 = iVar15 - 1;
    iVar15 = uVar8 * 4;
    if (*(int *)(iVar7 + iVar15) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x167,"search_suitable_block",
                       s_sl_map_____internal_error___seco_ram_4ff54a14);
    }
  }
  iVar3 = __ffssi2();
  uVar1 = iVar3 - 1;
  iVar3 = *(int *)(param_1 + 0x20);
  uVar12 = *(uint *)(((uVar12 >> 0xe & 0x3f) * uVar8 + uVar1) * 4 + iVar3);
  if (uVar12 == 0) {
    return 0;
  }
  if ((*(uint *)(uVar12 + 4) & 0xfffffffc) < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x26a,"block_locate_free",
                     s_block_size_block__>___size_ram_4ff54a50);
  }
  iVar9 = *(int *)(uVar12 + 0xc);
  uVar14 = *(uint *)(uVar12 + 8);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x174,"remove_free_block",
                     "prev && \"prev_free field can not be null\"");
  }
  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x175,"remove_free_block",
                     "next && \"next_free field can not be null\"");
  }
  *(int *)(uVar14 + 0xc) = iVar9;
  *(uint *)(iVar9 + 8) = uVar14;
  puVar10 = (uint *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar8 + uVar1) * 4 + iVar3);
  if (((uVar12 == *puVar10) && (*puVar10 = uVar14, uVar14 == param_1)) &&
     (uVar14 = ~(1 << (uVar1 & 0x1f)) & *(uint *)(iVar15 + iVar7),
     *(uint *)(iVar15 + iVar7) = uVar14, uVar14 == 0)) {
    *(uint *)(param_1 + 0x18) = ~(1 << (uVar8 & 0x1f)) & *(uint *)(param_1 + 0x18);
  }
  uVar14 = param_2 - 1;
  uVar8 = uVar12 + 8;
  uVar1 = uVar8 + uVar14 & -param_2;
  if ((param_2 & uVar14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x101,"align_ptr",
                     s_0_____align____align___1_______m_ram_4ff549d4);
  }
  uVar11 = param_4 + 3U & 0xfffffffc;
  uVar13 = uVar11 + 0x10;
  uVar6 = uVar1 - uVar8;
  if (uVar8 == uVar1) {
    if ((uVar11 != 0) && (4 < param_2)) goto LAB_ram_4ff44008;
LAB_ram_4ff44368:
    uVar14 = *(uint *)(uVar12 + 4);
  }
  else {
    if (uVar6 < uVar13) {
LAB_ram_4ff44008:
      uVar4 = uVar13 - uVar6;
      if (uVar13 - uVar6 < param_2) {
        uVar4 = param_2;
      }
      uVar6 = (uVar1 + uVar14 + uVar4 & -param_2) - uVar8;
      if (uVar6 == 0) goto LAB_ram_4ff44368;
      if (uVar6 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf.c",0x25c,"tlsf_memalign_offs",
                         s_gap_>__gap_minimum_____gap_size_t_ram_4ff54bbc);
      }
    }
    uVar14 = *(uint *)(uVar12 + 4);
    iVar15 = uVar6 - uVar11;
    if (iVar15 + 0x10U <= (uVar14 & 0xfffffffc)) {
      uVar1 = uVar12 + iVar15;
      uVar6 = ((uVar14 & 0xfffffffc) + uVar11) - uVar6;
      if (uVar1 + 8 != (uVar1 + 0xb & 0xfffffffc)) goto LAB_ram_4ff4451c;
      *(uint *)(uVar1 + 4) = *(uint *)(uVar1 + 4) & 3 | uVar6;
      if ((uVar6 & 0xfffffffc) < 0xc) goto LAB_ram_4ff44542;
      *(uint *)(uVar12 + 4) = *(uint *)(uVar12 + 4) & 3 | iVar15 - 4U;
      puVar10 = (uint *)((*(uint *)(uVar1 + 4) & 0xfffffffc) + uVar1 + 8);
      if (*(uint *)(uVar1 + 4) < 4) goto LAB_ram_4ff44424;
      puVar10[-1] = uVar1;
      *puVar10 = *puVar10 | 2;
      *(uint *)(uVar1 + 4) = *(uint *)(uVar1 + 4) | 3;
      uVar14 = *(uint *)(uVar12 + 4) & 0xfffffffc;
      if (*(uint *)(uVar12 + 4) < 4) goto LAB_ram_4ff44424;
      *(uint *)(uVar8 + uVar14 + -4) = uVar12;
      uVar11 = *(uint *)(param_1 + 0x10);
      uVar13 = uVar11 >> 0x17 & 0xff;
      uVar6 = uVar11 >> 0xe & 0x3f;
      if (uVar14 < uVar13) {
        uVar4 = 0;
        uVar14 = (int)uVar14 / (int)(uVar13 / uVar6);
        uVar13 = uVar14;
      }
      else {
        iVar15 = __clzsi2(uVar14);
        uVar4 = (0x20 - iVar15) - (uVar11 >> 5 & 7);
        uVar13 = uVar11 >> 0x14 & 7;
        uVar14 = uVar14 >> ((0x1f - iVar15) - uVar13 & 0x1f) ^ 1 << uVar13;
        uVar13 = uVar4 * uVar6 + uVar14;
      }
      iVar15 = *(int *)(uVar13 * 4 + iVar3);
      if (iVar15 == 0) goto LAB_ram_4ff44562;
      *(int *)(uVar12 + 8) = iVar15;
      *(uint *)(uVar12 + 0xc) = param_1;
      *(uint *)(iVar15 + 0xc) = uVar12;
      if (uVar8 != (uVar12 + 0xb & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x196,"insert_free_block",
                         "block_to_ptr(block) == align_ptr(block_to_ptr(block), ALIGN_SIZE) && \"block not aligned properly\""
                        );
      }
      uVar8 = *(uint *)(param_1 + 0x18);
      puVar10 = (uint *)(uVar4 * 4 + iVar7);
      *(uint *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar4 + uVar14) * 4 + iVar3) = uVar12;
      *(uint *)(param_1 + 0x18) = uVar8 | 1 << (uVar4 & 0x1f);
      *puVar10 = *puVar10 | 1 << (uVar14 & 0x1f);
      uVar14 = *(uint *)(uVar1 + 4);
      uVar12 = uVar1;
    }
  }
  if ((uVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x224,"block_trim_free",
                     s_block_is_free_block______block_m_ram_4ff54a8c);
  }
  uVar1 = uVar14 & 0xfffffffc;
  iVar15 = uVar12 + 8;
  if (uVar2 + 0x10 <= uVar1) {
    uVar8 = (uVar2 - 4) + iVar15;
    uVar14 = (uVar1 - uVar2) - 4;
    if (uVar8 + 8 != (uVar8 + 0xb & 0xfffffffc)) {
LAB_ram_4ff4451c:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c4,"block_split",
                       s_block_to_ptr_remaining_____align_ram_4ff54abc);
    }
    if (uVar1 != uVar2 + 4 + uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c7,"block_split",
                       s_block_size_block_____remain_size_ram_4ff54b30);
    }
    *(uint *)(uVar8 + 4) = *(uint *)(uVar8 + 4) & 3 | uVar14;
    if (uVar14 < 0xc) {
LAB_ram_4ff44542:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c9,"block_split",
                       s_block_size_remaining__>__block_s_ram_4ff54b70);
    }
    *(uint *)(uVar12 + 4) = *(uint *)(uVar12 + 4) & 3 | uVar2;
    puVar10 = (uint *)((*(uint *)(uVar8 + 4) & 0xfffffffc) + uVar8 + 8);
    if (*(uint *)(uVar8 + 4) < 4) goto LAB_ram_4ff44424;
    puVar10[-1] = uVar8;
    *puVar10 = *puVar10 | 2;
    uVar2 = *(uint *)(uVar8 + 4);
    *(uint *)(uVar8 + 4) = uVar2 | 1;
    if (*(uint *)(uVar12 + 4) < 4) goto LAB_ram_4ff44424;
    *(uint *)((*(uint *)(uVar12 + 4) & 0xfffffffc) + iVar15 + -4) = uVar12;
    *(uint *)(uVar8 + 4) = uVar2 | 3;
    uVar13 = *(uint *)(param_1 + 0x10);
    uVar2 = uVar2 & 0xfffffffc;
    uVar1 = uVar13 >> 0x17 & 0xff;
    uVar14 = uVar13 >> 0xe & 0x3f;
    if (uVar2 < uVar1) {
      uVar6 = 0;
      uVar2 = (int)uVar2 / (int)(uVar1 / uVar14);
      uVar14 = uVar2;
    }
    else {
      if (uVar2 == 0) {
        iVar9 = -1;
        iVar5 = 0;
      }
      else {
        iVar9 = __clzsi2(uVar2);
        iVar5 = 0x20 - iVar9;
        iVar9 = 0x1f - iVar9;
      }
      uVar6 = iVar5 - (uVar13 >> 5 & 7);
      uVar1 = uVar13 >> 0x14 & 7;
      uVar2 = uVar2 >> (iVar9 - uVar1 & 0x1f) ^ 1 << uVar1;
      uVar14 = uVar6 * uVar14 + uVar2;
    }
    iVar9 = *(int *)(uVar14 * 4 + iVar3);
    if (iVar9 == 0) {
LAB_ram_4ff44562:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",400,"insert_free_block",
                       "current && \"free list cannot have a null entry\"");
    }
    *(int *)(uVar8 + 8) = iVar9;
    *(uint *)(uVar8 + 0xc) = param_1;
    *(uint *)(iVar9 + 0xc) = uVar8;
    uVar14 = *(uint *)(param_1 + 0x18);
    puVar10 = (uint *)(iVar7 + uVar6 * 4);
    *(uint *)(iVar3 + ((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar6 + uVar2) * 4) = uVar8;
    *(uint *)(param_1 + 0x18) = uVar14 | 1 << (uVar6 & 0x1f);
    *puVar10 = *puVar10 | 1 << (uVar2 & 0x1f);
    uVar14 = *(uint *)(uVar12 + 4);
    uVar1 = uVar14 & 0xfffffffc;
  }
  iVar7 = uVar12 + 4 + uVar1;
  if (3 < uVar14) {
    *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xfffffffd;
    *(uint *)(uVar12 + 4) = *(uint *)(uVar12 + 4) & 0xfffffffe;
    return iVar15;
  }
LAB_ram_4ff44424:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tlsf_block_functions.h",0xa1,"block_next","!block_is_last(block)");
}


