/* Firmware entry: 0x481a9b02 */

uint FUN_ram_481a9b02(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 3) == 0) {
    if (0x23 < param_2) {
      iVar2 = __clzsi2(param_2);
      iVar5 = 0x20;
      uVar7 = 0x20U - iVar2 & 0xff;
      if (param_2 < 0x4001) {
        uVar11 = 8;
        uVar1 = 0x20;
        iVar10 = 8;
        iVar3 = 3;
        iVar2 = 0xfc;
        iVar9 = 5;
      }
      else if (param_2 < 0x40001) {
        uVar11 = 0x10;
        iVar10 = 0x10;
        iVar5 = 0x40;
        uVar1 = 0x40;
        iVar3 = 4;
        iVar2 = 0xfb;
        iVar9 = 6;
      }
      else {
        uVar11 = 0x20;
        iVar5 = 0x80;
        iVar10 = 0x20;
        uVar1 = 0x80;
        iVar3 = 5;
        iVar2 = 0xfa;
        iVar9 = 7;
      }
      uVar8 = iVar2 + uVar7 & 0xff;
      iVar2 = (uVar8 * uVar11 + uVar8 + 9) * 4;
      *(int *)(param_1 + 0x14) = iVar2;
      *(uint *)(param_1 + 0x10) =
           iVar9 << 5 | uVar8 | uVar7 << 8 | iVar10 << 0xe | iVar3 << 0x14 | iVar5 << 0x17 |
           *(uint *)(param_1 + 0x10) & 0x80000000;
      if (iVar2 + 0xcU <= param_2) {
        puVar4 = (undefined4 *)(param_1 + 0x27 & 0xfffffffc);
        puVar6 = puVar4 + uVar8;
        *(uint *)(param_1 + 8) = param_1;
        *(uint *)(param_1 + 0xc) = param_1;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 **)(param_1 + 0x1c) = puVar4;
        *(undefined4 **)(param_1 + 0x20) = puVar6;
        if (uVar1 / uVar11 != 4) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("tlsf.c",0x4f,"control_construct",
                           "ALIGN_SIZE == control->small_block_size / control->sl_index_count");
        }
        iVar5 = 0;
        if (uVar8 != 0) {
          do {
            *puVar4 = 0;
            uVar7 = *(uint *)(param_1 + 0x10);
            iVar2 = 0;
            uVar11 = uVar7 >> 0xe & 0x3f;
            if (uVar11 != 0) {
              do {
                puVar6[iVar5 * uVar11 + iVar2] = param_1;
                uVar7 = *(uint *)(param_1 + 0x10);
                iVar2 = iVar2 + 1;
                uVar11 = uVar7 >> 0xe & 0x3f;
              } while (iVar2 < (int)uVar11);
            }
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar5 < (int)(uVar7 & 0x1f));
        }
        return param_1;
      }
    }
  }
  else {
    FUN_ram_4819aaa0("tlsf_create: Memory must be aligned to %u bytes.\n",4);
  }
  return 0;
}


