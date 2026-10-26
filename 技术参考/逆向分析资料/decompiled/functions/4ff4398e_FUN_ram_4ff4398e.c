/* Firmware entry: 0x4ff4398e */

int FUN_ram_4ff4398e(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (param_1 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (uVar9 >> 8 & 0x1f)) <= uVar1) {
    return 0;
  }
  uVar5 = 0xc;
  if (uVar1 < 0xc) {
    uVar10 = uVar9 >> 0x17 & 0xff;
    if (uVar10 < 0xd) goto LAB_ram_4ff43c00;
LAB_ram_4ff439d4:
    uVar12 = 0;
    uVar1 = (int)uVar5 / (int)(uVar10 / (uVar9 >> 0xe & 0x3f));
  }
  else {
    uVar10 = uVar9 >> 0x17 & 0xff;
    uVar5 = uVar1;
    if (uVar1 < uVar10) goto LAB_ram_4ff439d4;
LAB_ram_4ff43c00:
    iVar11 = __clzsi2(uVar5);
    uVar12 = uVar9 >> 0x14 & 7;
    uVar1 = 1 << ((0x1f - iVar11) - uVar12 & 0x1f);
    if ((uVar1 - 1 & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0xf3,"align_up",
                       s_0_____align____align___1_______m_ram_4ff549d4);
    }
    uVar5 = (uVar5 - 1) + uVar1 & -uVar1;
    if (uVar5 < uVar10) goto LAB_ram_4ff439d4;
    if (uVar5 == 0) {
      iVar11 = -1;
      iVar13 = 0;
    }
    else {
      iVar13 = __clzsi2(uVar5);
      iVar11 = 0x1f - iVar13;
      iVar13 = 0x20 - iVar13;
    }
    uVar1 = uVar5 >> (iVar11 - uVar12 & 0x1f) ^ 1 << uVar12;
    uVar12 = iVar13 - (uVar9 >> 5 & 7);
  }
  if ((int)uVar12 < (int)(uVar9 & 0x1f)) {
    iVar13 = *(int *)(param_1 + 0x1c);
    iVar11 = uVar12 * 4;
    if ((-1 << (uVar1 & 0x1f) & *(uint *)(iVar13 + iVar11)) == 0) {
      if ((-1 << (uVar12 + 1 & 0x1f) & *(uint *)(param_1 + 0x18)) == 0) goto LAB_ram_4ff43c72;
      iVar11 = __ffssi2();
      uVar12 = iVar11 - 1;
      iVar11 = uVar12 * 4;
      if (*(int *)(iVar13 + iVar11) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x167,"search_suitable_block",
                         s_sl_map_____internal_error___seco_ram_4ff54a14);
      }
    }
    iVar2 = __ffssi2();
    uVar1 = iVar2 - 1;
    iVar14 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(((uVar9 >> 0xe & 0x3f) * uVar12 + uVar1) * 4 + iVar14);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 4) & 0xfffffffc) < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x26a,"block_locate_free",
                       s_block_size_block__>___size_ram_4ff54a50);
    }
    iVar6 = *(int *)(iVar2 + 0xc);
    iVar4 = *(int *)(iVar2 + 8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x174,"remove_free_block",
                       "prev && \"prev_free field can not be null\"");
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x175,"remove_free_block",
                       "next && \"next_free field can not be null\"");
    }
    *(int *)(iVar4 + 0xc) = iVar6;
    *(int *)(iVar6 + 8) = iVar4;
    piVar7 = (int *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar12 + uVar1) * 4 + iVar14);
    if (((iVar2 == *piVar7) && (*piVar7 = iVar4, iVar4 == param_1)) &&
       (uVar1 = ~(1 << (uVar1 & 0x1f)) & *(uint *)(iVar11 + iVar13),
       *(uint *)(iVar11 + iVar13) = uVar1, uVar1 == 0)) {
      *(uint *)(param_1 + 0x18) = ~(1 << (uVar12 & 0x1f)) & *(uint *)(param_1 + 0x18);
    }
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x276,"block_prepare_used",
                       s_size_____size_must_be_non_zero__ram_4ff54a6c);
    }
    uVar1 = *(uint *)(iVar2 + 4);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x224,"block_trim_free",
                       s_block_is_free_block______block_m_ram_4ff54a8c);
    }
    uVar9 = uVar1 & 0xfffffffc;
    iVar11 = iVar2 + 8;
    if (uVar5 + 0x10 <= uVar9) {
      uVar10 = (uVar5 - 4) + iVar11;
      uVar1 = (uVar9 - uVar5) - 4;
      if (uVar10 + 8 != (uVar10 + 0xb & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c4,"block_split",
                         s_block_to_ptr_remaining_____align_ram_4ff54abc);
      }
      if (uVar9 != uVar5 + 4 + uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c7,"block_split",
                         s_block_size_block_____remain_size_ram_4ff54b30);
      }
      *(uint *)(uVar10 + 4) = *(uint *)(uVar10 + 4) & 3 | uVar1;
      if ((uVar1 & 0xfffffffc) < 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c9,"block_split",
                         s_block_size_remaining__>__block_s_ram_4ff54b70);
      }
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 3 | uVar5;
      puVar8 = (uint *)((*(uint *)(uVar10 + 4) & 0xfffffffc) + uVar10 + 8);
      if (*(uint *)(uVar10 + 4) < 4) goto LAB_ram_4ff43d78;
      puVar8[-1] = uVar10;
      *puVar8 = *puVar8 | 2;
      uVar1 = *(uint *)(uVar10 + 4);
      *(uint *)(uVar10 + 4) = uVar1 | 1;
      if (*(uint *)(iVar2 + 4) < 4) goto LAB_ram_4ff43d78;
      *(int *)((*(uint *)(iVar2 + 4) & 0xfffffffc) + iVar11 + -4) = iVar2;
      *(uint *)(uVar10 + 4) = uVar1 | 3;
      uVar12 = *(uint *)(param_1 + 0x10);
      uVar1 = uVar1 & 0xfffffffc;
      uVar5 = uVar12 >> 0x17 & 0xff;
      uVar9 = uVar12 >> 0xe & 0x3f;
      if (uVar1 < uVar5) {
        uVar3 = 0;
        uVar1 = (int)uVar1 / (int)(uVar5 / uVar9);
        uVar9 = uVar1;
      }
      else {
        if (uVar1 == 0) {
          iVar4 = -1;
          iVar6 = 0;
        }
        else {
          iVar4 = __clzsi2(uVar1);
          iVar6 = 0x20 - iVar4;
          iVar4 = 0x1f - iVar4;
        }
        uVar3 = iVar6 - (uVar12 >> 5 & 7);
        uVar5 = uVar12 >> 0x14 & 7;
        uVar1 = uVar1 >> (iVar4 - uVar5 & 0x1f) ^ 1 << uVar5;
        uVar9 = uVar3 * uVar9 + uVar1;
      }
      iVar4 = *(int *)(uVar9 * 4 + iVar14);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",400,"insert_free_block",
                         "current && \"free list cannot have a null entry\"");
      }
      *(int *)(uVar10 + 8) = iVar4;
      *(int *)(uVar10 + 0xc) = param_1;
      *(uint *)(iVar4 + 0xc) = uVar10;
      uVar9 = *(uint *)(param_1 + 0x18);
      puVar8 = (uint *)(iVar13 + uVar3 * 4);
      *(uint *)(iVar14 + ((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar3 + uVar1) * 4) = uVar10;
      *(uint *)(param_1 + 0x18) = uVar9 | 1 << (uVar3 & 0x1f);
      *puVar8 = *puVar8 | 1 << (uVar1 & 0x1f);
      uVar1 = *(uint *)(iVar2 + 4);
      uVar9 = uVar1 & 0xfffffffc;
    }
    iVar13 = iVar2 + 4 + uVar9;
    if (uVar1 < 4) {
LAB_ram_4ff43d78:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_block_functions.h",0xa1,"block_next","!block_is_last(block)");
    }
    *(uint *)(iVar13 + 4) = *(uint *)(iVar13 + 4) & 0xfffffffd;
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffe;
  }
  else {
LAB_ram_4ff43c72:
    iVar11 = 0;
  }
  return iVar11;
}


