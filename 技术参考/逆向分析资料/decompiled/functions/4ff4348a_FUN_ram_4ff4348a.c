/* Firmware entry: 0x4ff4348a */

/* WARNING: Removing unreachable block (ram,0x4ff435a2) */
/* WARNING: Removing unreachable block (ram,0x4ff436ec) */
/* WARNING: Removing unreachable block (ram,0x4ff43716) */

void FUN_ram_4ff4348a(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return;
  }
  uVar5 = *(uint *)(param_2 - 4);
  iVar11 = param_2 - 8;
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf.c",0x276,"tlsf_free",s__block_is_free_block______block_a_ram_4ff54be8);
  }
  piVar6 = (int *)((uVar5 & 0xfffffffc) + (param_2 - 4));
  if (3 < uVar5) {
    *piVar6 = iVar11;
    piVar6[1] = piVar6[1] | 2;
    uVar5 = *(uint *)(param_2 - 4);
    *(uint *)(param_2 - 4) = uVar5 | 1;
    if ((uVar5 & 2) == 0) {
      piVar6 = (int *)((uVar5 & 0xfffffffc) + (param_2 - 4));
      if ((uVar5 | 1) < 4) goto LAB_ram_4ff43762;
    }
    else {
      iVar11 = *(int *)(param_2 - 8);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x208,"block_merge_prev",
                         s_prev_____prev_physical_block_can_ram_4ff54c20);
      }
      uVar5 = *(uint *)(iVar11 + 4);
      if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x209,"block_merge_prev",
                         s_block_is_free_prev______prev_blo_ram_4ff54c4c);
      }
      uVar9 = *(uint *)(param_1 + 0x10);
      uVar10 = uVar5 & 0xfffffffc;
      uVar7 = uVar9 >> 0x17 & 0xff;
      if (uVar10 < uVar7) {
        uVar3 = 0;
        uVar10 = (int)uVar10 / (int)(uVar7 / (uVar9 >> 0xe & 0x3f));
      }
      else {
        if (uVar10 == 0) {
          iVar1 = -1;
          iVar2 = 0;
        }
        else {
          iVar1 = __clzsi2(uVar10);
          iVar2 = 0x20 - iVar1;
          iVar1 = 0x1f - iVar1;
        }
        uVar7 = uVar9 >> 0x14 & 7;
        uVar3 = iVar2 - (uVar9 >> 5 & 7);
        uVar10 = uVar10 >> (iVar1 - uVar7 & 0x1f) ^ 1 << uVar7;
      }
      iVar2 = *(int *)(iVar11 + 0xc);
      iVar1 = *(int *)(iVar11 + 8);
      if (iVar2 == 0) goto LAB_ram_4ff43884;
      if (iVar1 == 0) goto LAB_ram_4ff438c4;
      *(int *)(iVar1 + 0xc) = iVar2;
      *(int *)(iVar2 + 8) = iVar1;
      piVar6 = (int *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar3 + uVar10) * 4 +
                      *(int *)(param_1 + 0x20));
      if ((iVar11 == *piVar6) && (*piVar6 = iVar1, iVar1 == param_1)) {
        puVar4 = (uint *)(*(int *)(param_1 + 0x1c) + uVar3 * 4);
        uVar5 = ~(1 << (uVar10 & 0x1f)) & *puVar4;
        *puVar4 = uVar5;
        if (uVar5 == 0) {
          uVar5 = *(uint *)(iVar11 + 4);
          *(uint *)(param_1 + 0x18) = ~(1 << (uVar3 & 0x1f)) & *(uint *)(param_1 + 0x18);
        }
        else {
          uVar5 = *(uint *)(iVar11 + 4);
        }
      }
      if (uVar5 < 4) goto LAB_ram_4ff43864;
      puVar4 = (uint *)(param_2 - 4);
      param_2 = iVar11 + 8;
      uVar5 = (*puVar4 & 0xfffffffc) + 4 + uVar5;
      *(uint *)(iVar11 + 4) = uVar5;
      piVar6 = (int *)(iVar11 + 4 + (uVar5 & 0xfffffffc));
      if (uVar5 < 4) goto LAB_ram_4ff43762;
      *piVar6 = iVar11;
    }
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_control_functions.h",0x215,"block_merge_next",
                       s_next_____next_physical_block_can_ram_4ff54ccc);
    }
    if ((piVar6[1] & 1U) == 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      uVar5 = *(uint *)(iVar11 + 4) & 0xfffffffc;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x10);
      uVar9 = piVar6[1] & 0xfffffffc;
      uVar5 = uVar7 >> 0x17 & 0xff;
      if (uVar9 < uVar5) {
        uVar10 = 0;
        uVar5 = (int)uVar9 / (int)(uVar5 / (uVar7 >> 0xe & 0x3f));
      }
      else {
        if (uVar9 == 0) {
          iVar1 = -1;
          iVar2 = 0;
        }
        else {
          iVar1 = __clzsi2(uVar9);
          iVar2 = 0x20 - iVar1;
          iVar1 = 0x1f - iVar1;
        }
        uVar5 = uVar7 >> 0x14 & 7;
        uVar10 = iVar2 - (uVar7 >> 5 & 7);
        uVar5 = uVar9 >> (iVar1 - uVar5 & 0x1f) ^ 1 << uVar5;
      }
      iVar2 = piVar6[3];
      iVar1 = piVar6[2];
      if (iVar2 == 0) {
LAB_ram_4ff43884:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x174,"remove_free_block",
                         "prev && \"prev_free field can not be null\"");
      }
      if (iVar1 == 0) {
LAB_ram_4ff438c4:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x175,"remove_free_block",
                         "next && \"next_free field can not be null\"");
      }
      *(int *)(iVar1 + 0xc) = iVar2;
      *(int *)(iVar2 + 8) = iVar1;
      iVar2 = *(int *)(param_1 + 0x20);
      piVar8 = (int *)(((*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar10 + uVar5) * 4 + iVar2);
      if (((int *)*piVar8 == piVar6) && (*piVar8 = iVar1, iVar1 == param_1)) {
        puVar4 = (uint *)(*(int *)(param_1 + 0x1c) + uVar10 * 4);
        uVar5 = ~(1 << (uVar5 & 0x1f)) & *puVar4;
        *puVar4 = uVar5;
        if (uVar5 == 0) {
          *(uint *)(param_1 + 0x18) = ~(1 << (uVar10 & 0x1f)) & *(uint *)(param_1 + 0x18);
        }
        uVar5 = *(uint *)(iVar11 + 4);
        if (uVar5 < 4) {
LAB_ram_4ff43864:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("tlsf_control_functions.h",0x1f5,"block_absorb",
                           s__block_is_last_prev______previou_ram_4ff54c94);
        }
        uVar9 = piVar6[1] & 0xfffffffc;
      }
      else {
        uVar5 = *(uint *)(iVar11 + 4);
      }
      uVar7 = uVar5 + uVar9 + 4;
      uVar5 = uVar7 & 0xfffffffc;
      *(uint *)(iVar11 + 4) = uVar7;
      if (uVar7 < 4) goto LAB_ram_4ff43762;
      *(int *)((param_2 - 4) + uVar5) = iVar11;
    }
    uVar9 = *(uint *)(param_1 + 0x10);
    uVar7 = uVar9 >> 0x17 & 0xff;
    if (uVar5 < uVar7) {
      uVar10 = 0;
      uVar5 = (int)uVar5 / (int)(uVar7 / (uVar9 >> 0xe & 0x3f));
      uVar7 = uVar5;
    }
    else {
      iVar1 = __clzsi2(uVar5);
      uVar10 = (0x20 - iVar1) - (uVar9 >> 5 & 7);
      uVar7 = uVar9 >> 0x14 & 7;
      uVar7 = uVar5 >> ((0x1f - iVar1) - uVar7 & 0x1f) ^ 1 << uVar7;
      uVar5 = (uVar9 >> 0xe & 0x3f) * uVar10 + uVar7;
    }
    iVar1 = *(int *)(uVar5 * 4 + iVar2);
    if (iVar1 != 0) {
      *(int *)(iVar11 + 8) = iVar1;
      *(int *)(iVar11 + 0xc) = param_1;
      *(int *)(iVar1 + 0xc) = iVar11;
      if (param_2 != (param_2 + 3 & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x196,"insert_free_block",
                         "block_to_ptr(block) == align_ptr(block_to_ptr(block), ALIGN_SIZE) && \"block not aligned properly\""
                        );
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      puVar4 = (uint *)(uVar10 * 4 + *(int *)(param_1 + 0x1c));
      *(int *)((uVar7 + (*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar10) * 4 + iVar2) = iVar11;
      *(uint *)(param_1 + 0x18) = uVar5 | 1 << (uVar10 & 0x1f);
      *puVar4 = *puVar4 | 1 << (uVar7 & 0x1f);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tlsf_control_functions.h",400,"insert_free_block",
                     "current && \"free list cannot have a null entry\"");
  }
LAB_ram_4ff43762:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("tlsf_block_functions.h",0xa1,"block_next","!block_is_last(block)");
}


