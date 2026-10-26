/* Firmware entry: 0x4ff445d8 */

/* WARNING: Removing unreachable block (ram,0x4ff446c6) */
/* WARNING: Removing unreachable block (ram,0x4ff448aa) */

int FUN_ram_4ff445d8(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar11 = FUN_ram_4ff4398e(param_1,param_3);
    return iVar11;
  }
  if (param_3 == 0) {
    FUN_ram_4ff4348a();
    return 0;
  }
  uVar8 = *(uint *)(param_2 + -4);
  if (uVar8 < 4) {
LAB_ram_4ff44780:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_block_functions.h",0xa1,"block_next","!block_is_last(block)");
  }
  uVar5 = param_3 + 3 & 0xfffffffc;
  if (param_1 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (uVar9 >> 8 & 0x1f)) <= uVar5) {
    return 0;
  }
  if (uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf.c",0x2a9,"tlsf_realloc",s__block_is_free_block______block_a_ram_4ff54be8)
    ;
  }
  uVar10 = uVar8 & 0xfffffffc;
  iVar11 = param_2 + -4;
  if (uVar10 < uVar5) {
    uVar12 = uVar10 + iVar11;
    if (((*(uint *)(uVar12 + 4) & 1) == 0) ||
       (uVar13 = *(uint *)(uVar12 + 4) & 0xfffffffc, uVar10 + 4 + uVar13 < uVar5)) {
      iVar11 = FUN_ram_4ff4398e(param_1,param_3);
      if (iVar11 != 0) {
        if (uVar10 < param_3) {
          param_3 = uVar10;
        }
        FUN_ram_4ff45158(iVar11,param_2,param_3);
        FUN_ram_4ff4348a(param_1,param_2);
        return iVar11;
      }
      return 0;
    }
    uVar10 = uVar9 >> 0x17 & 0xff;
    if (uVar13 < uVar10) {
      uVar1 = 0;
      uVar9 = (int)uVar13 / (int)(uVar10 / (uVar9 >> 0xe & 0x3f));
    }
    else {
      if (uVar13 == 0) {
        iVar3 = -1;
        iVar2 = 0;
      }
      else {
        iVar3 = __clzsi2(uVar13);
        iVar2 = 0x20 - iVar3;
        iVar3 = 0x1f - iVar3;
      }
      uVar10 = uVar9 >> 0x14 & 7;
      uVar1 = iVar2 - (uVar9 >> 5 & 7);
      uVar9 = uVar13 >> (iVar3 - uVar10 & 0x1f) ^ 1 << uVar10;
    }
    iVar3 = *(int *)(uVar12 + 0xc);
    uVar10 = *(uint *)(uVar12 + 8);
    if (iVar3 == 0) goto LAB_ram_4ff44ac2;
    if (uVar10 == 0) goto LAB_ram_4ff44ae0;
    *(int *)(uVar10 + 0xc) = iVar3;
    *(uint *)(iVar3 + 8) = uVar10;
    puVar4 = (uint *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar1 + uVar9) * 4 +
                     *(int *)(param_1 + 0x20));
    if ((uVar12 == *puVar4) && (*puVar4 = uVar10, uVar10 == param_1)) {
      puVar4 = (uint *)(*(int *)(param_1 + 0x1c) + uVar1 * 4);
      uVar8 = ~(1 << (uVar9 & 0x1f)) & *puVar4;
      *puVar4 = uVar8;
      if (uVar8 == 0) {
        *(uint *)(param_1 + 0x18) = ~(1 << (uVar1 & 0x1f)) & *(uint *)(param_1 + 0x18);
      }
      uVar8 = *(uint *)(param_2 + -4);
      if (uVar8 < 4) goto LAB_ram_4ff44a38;
      uVar13 = *(uint *)(uVar12 + 4) & 0xfffffffc;
    }
    uVar8 = uVar8 + uVar13 + 4;
    *(uint *)(param_2 + -4) = uVar8;
    piVar6 = (int *)((uVar8 & 0xfffffffc) + iVar11);
    if (uVar8 < 4) goto LAB_ram_4ff44780;
    *piVar6 = param_2 + -8;
    piVar6[1] = piVar6[1] & 0xfffffffd;
    uVar10 = *(uint *)(param_2 + -4);
    *(uint *)(param_2 + -4) = uVar10 & 0xfffffffe;
    uVar10 = uVar10 & 0xfffffffc;
  }
  if (uVar10 < uVar5 + 0x10) {
    return param_2;
  }
  uVar9 = uVar5 + iVar11;
  uVar12 = uVar9 + 8;
  uVar8 = (uVar10 - uVar5) - 4;
  if (uVar12 != (uVar9 + 0xb & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c4,"block_split",
                     s_block_to_ptr_remaining_____align_ram_4ff54abc);
  }
  if (uVar5 + 4 + uVar8 != uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c7,"block_split",
                     s_block_size_block_____remain_size_ram_4ff54b30);
  }
  *(uint *)(uVar9 + 4) = *(uint *)(uVar9 + 4) & 3 | uVar8;
  if (uVar8 < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x1c9,"block_split",
                     s_block_size_remaining__>__block_s_ram_4ff54b70);
  }
  *(uint *)(param_2 + -4) = *(uint *)(param_2 + -4) & 3 | uVar5;
  puVar4 = (uint *)((*(uint *)(uVar9 + 4) & 0xfffffffc) + uVar12);
  if (*(uint *)(uVar9 + 4) < 4) goto LAB_ram_4ff44780;
  puVar4[-1] = uVar9;
  *puVar4 = *puVar4 | 2;
  uVar5 = *(uint *)(uVar9 + 4) & 0xfffffffd | 1;
  uVar8 = *(uint *)(uVar9 + 4) & 0xfffffffc;
  puVar4 = (uint *)(uVar12 + uVar8);
  *(uint *)(uVar9 + 4) = uVar5;
  if (uVar5 < 4) goto LAB_ram_4ff44780;
  if (puVar4 == (uint *)0x4) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",0x215,"block_merge_next",
                     s_next_____next_physical_block_can_ram_4ff54ccc);
  }
  if ((*puVar4 & 1) == 0) {
    uVar10 = *(uint *)(param_1 + 0x10);
    iVar11 = *(int *)(param_1 + 0x20);
    uVar5 = uVar10 >> 0x17 & 0xff;
    if (uVar5 <= uVar8) {
      iVar3 = -1;
      iVar2 = 0;
      if (uVar8 != 0) goto LAB_ram_4ff44a8e;
LAB_ram_4ff448dc:
      uVar12 = iVar2 - (uVar10 >> 5 & 7);
      uVar5 = uVar10 >> 0x14 & 7;
      uVar5 = uVar8 >> (iVar3 - uVar5 & 0x1f) ^ 1 << uVar5;
      uVar8 = (uVar10 >> 0xe & 0x3f) * uVar12 + uVar5;
      goto LAB_ram_4ff44906;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x10);
    uVar10 = *puVar4 & 0xfffffffc;
    uVar8 = uVar12 >> 0x17 & 0xff;
    if (uVar10 < uVar8) {
      uVar13 = 0;
      uVar8 = (int)uVar10 / (int)(uVar8 / (uVar12 >> 0xe & 0x3f));
    }
    else {
      if (uVar10 == 0) {
        iVar11 = -1;
        iVar3 = 0;
      }
      else {
        iVar11 = __clzsi2(uVar10);
        iVar3 = 0x20 - iVar11;
        iVar11 = 0x1f - iVar11;
      }
      uVar8 = uVar12 >> 0x14 & 7;
      uVar13 = iVar3 - (uVar12 >> 5 & 7);
      uVar8 = uVar10 >> (iVar11 - uVar8 & 0x1f) ^ 1 << uVar8;
    }
    uVar1 = puVar4[2];
    uVar12 = puVar4[1];
    if (uVar1 == 0) {
LAB_ram_4ff44ac2:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x174,"remove_free_block",
                       "prev && \"prev_free field can not be null\"");
    }
    if (uVar12 == 0) {
LAB_ram_4ff44ae0:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x175,"remove_free_block",
                       "next && \"next_free field can not be null\"");
    }
    *(uint *)(uVar12 + 0xc) = uVar1;
    *(uint *)(uVar1 + 8) = uVar12;
    iVar11 = *(int *)(param_1 + 0x20);
    puVar7 = (uint *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar13 + uVar8) * 4 + iVar11);
    if ((puVar4 + -1 == (uint *)*puVar7) && (*puVar7 = uVar12, uVar12 == param_1)) {
      puVar7 = (uint *)(*(int *)(param_1 + 0x1c) + uVar13 * 4);
      uVar8 = ~(1 << (uVar8 & 0x1f)) & *puVar7;
      *puVar7 = uVar8;
      if (uVar8 == 0) {
        *(uint *)(param_1 + 0x18) = ~(1 << (uVar13 & 0x1f)) & *(uint *)(param_1 + 0x18);
      }
      uVar5 = *(uint *)(uVar9 + 4);
      if (uVar5 < 4) {
LAB_ram_4ff44a38:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x1f5,"block_absorb",
                         s__block_is_last_prev______previou_ram_4ff54c94);
      }
      uVar10 = *puVar4 & 0xfffffffc;
    }
    uVar5 = uVar5 + uVar10 + 4;
    uVar8 = uVar5 & 0xfffffffc;
    *(uint *)(uVar9 + 4) = uVar5;
    if (uVar5 < 4) goto LAB_ram_4ff44780;
    *(uint *)(uVar9 + 4 + uVar8) = uVar9;
    uVar10 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar10 >> 0x17 & 0xff;
    if (uVar5 <= uVar8) {
LAB_ram_4ff44a8e:
      iVar3 = __clzsi2(uVar8);
      iVar2 = 0x20 - iVar3;
      iVar3 = 0x1f - iVar3;
      goto LAB_ram_4ff448dc;
    }
  }
  uVar12 = 0;
  uVar8 = (int)uVar8 / (int)(uVar5 / (uVar10 >> 0xe & 0x3f));
  uVar5 = uVar8;
LAB_ram_4ff44906:
  iVar3 = *(int *)(uVar8 * 4 + iVar11);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",400,"insert_free_block",
                     "current && \"free list cannot have a null entry\"");
  }
  *(int *)(uVar9 + 8) = iVar3;
  *(uint *)(uVar9 + 0xc) = param_1;
  *(uint *)(iVar3 + 0xc) = uVar9;
  uVar8 = *(uint *)(param_1 + 0x18);
  puVar4 = (uint *)(uVar12 * 4 + *(int *)(param_1 + 0x1c));
  *(uint *)((uVar5 + (*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar12) * 4 + iVar11) = uVar9;
  *(uint *)(param_1 + 0x18) = uVar8 | 1 << (uVar12 & 0x1f);
  *puVar4 = *puVar4 | 1 << (uVar5 & 0x1f);
  return param_2;
}


