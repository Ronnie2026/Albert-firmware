/* Firmware entry: 0x481a9916 */

uint * FUN_ram_481a9916(uint param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((uint)param_2 & 3) != 0) {
    FUN_ram_4819aaa0("tlsf_add_pool: Memory must be aligned by %u bytes.\n",4);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return (uint *)0x0;
  }
  uVar5 = param_3 - 8U & 0xfffffffc;
  if (uVar5 < 0xc) {
    if (param_1 != 0) {
      iVar1 = (1 << (*(byte *)(param_1 + 0x11) & 0x1f)) + 8;
      goto LAB_ram_481a9a50;
    }
  }
  else if (param_1 != 0) {
    uVar2 = 1 << (*(byte *)(param_1 + 0x11) & 0x1f);
    if (uVar5 <= uVar2) {
      *param_2 = uVar5 | 1;
      uVar9 = *(uint *)(param_1 + 0x10);
      puVar8 = param_2 + -1;
      uVar2 = uVar9 >> 0x17 & 0xff;
      uVar7 = uVar9 >> 0xe & 0x3f;
      if (uVar5 < uVar2) {
        uVar3 = 0;
        uVar5 = (int)uVar5 / (int)(uVar2 / uVar7);
        uVar2 = uVar5;
      }
      else {
        iVar1 = __clzsi2(uVar5);
        uVar3 = (0x20 - iVar1) - (uVar9 >> 5 & 7);
        uVar2 = uVar9 >> 0x14 & 7;
        uVar5 = uVar5 >> ((0x1f - iVar1) - uVar2 & 0x1f) ^ 1 << uVar2;
        uVar2 = uVar3 * uVar7 + uVar5;
      }
      iVar1 = *(int *)(param_1 + 0x20);
      uVar2 = *(uint *)(uVar2 * 4 + iVar1);
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",400,"insert_free_block",
                         "current && \"free list cannot have a null entry\"");
      }
      param_2[1] = uVar2;
      param_2[2] = param_1;
      *(uint **)(uVar2 + 0xc) = puVar8;
      if (param_2 + 1 != (uint *)((int)param_2 + 7U & 0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tlsf_control_functions.h",0x196,"insert_free_block",
                         "block_to_ptr(block) == align_ptr(block_to_ptr(block), ALIGN_SIZE) && \"block not aligned properly\""
                        );
      }
      uVar2 = *(uint *)(param_1 + 0x18);
      puVar4 = (uint *)(uVar3 * 4 + *(int *)(param_1 + 0x1c));
      *(uint **)(iVar1 + (uVar5 + (*(uint *)(param_1 + 0x10) >> 0xe & 0x3f) * uVar3) * 4) = puVar8;
      *(uint *)(param_1 + 0x18) = uVar2 | 1 << (uVar3 & 0x1f);
      *puVar4 = *puVar4 | 1 << (uVar5 & 0x1f);
      puVar6 = (undefined4 *)((*param_2 & 0xfffffffc) + (int)(param_2 + 1));
      if (3 < *param_2) {
        puVar6[-1] = puVar8;
        *puVar6 = 2;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tlsf_block_functions.h",0xa1,"block_next","!block_is_last(block)");
    }
    iVar1 = uVar2 + 8;
    goto LAB_ram_481a9a50;
  }
  iVar1 = 8;
LAB_ram_481a9a50:
  FUN_ram_4819aaa0("tlsf_add_pool: Memory size must be between %u and %u bytes.\n",0x14,iVar1);
  return (uint *)0x0;
}


