/* Firmware entry: 0x4819c13a */

undefined4 FUN_ram_4819c13a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff21846(PTR_DAT_ram_4ff59f08_ram_4ff47fc8);
  if (DAT_ram_4ff6e2fc == (undefined *)0x0) {
    DAT_ram_4ff6e2fc = &DAT_ram_4ff6d7a4;
    DAT_ram_4ff6d82c = PTR_DAT_ram_4ff6d830_ram_4823b778;
  }
  puVar2 = DAT_ram_4ff6e2fc;
  uVar7 = *(uint *)(DAT_ram_4ff6e2fc + 4);
  if ((int)uVar7 < 0x20) {
    if (param_1 != 0) {
      iVar4 = *(int *)(DAT_ram_4ff6e2fc + 0x88);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_ram_4ff2070c(0x108);
        if (iVar4 == 0) goto LAB_ram_4819c192;
        *(undefined4 *)(iVar4 + 0x100) = 0;
        *(undefined4 *)(iVar4 + 0x104) = 0;
        *(int *)(puVar2 + 0x88) = iVar4;
      }
      uVar7 = *(uint *)(puVar2 + 4);
      puVar5 = (undefined4 *)(uVar7 * 4 + iVar4);
      *puVar5 = param_3;
      uVar6 = 1 << (uVar7 & 0x1f);
      *(uint *)(iVar4 + 0x100) = *(uint *)(iVar4 + 0x100) | uVar6;
      puVar5[0x20] = param_4;
      if (param_1 == 2) {
        *(uint *)(iVar4 + 0x104) = uVar6 | *(uint *)(iVar4 + 0x104);
      }
    }
    puVar1 = PTR_DAT_ram_4ff59f08_ram_4ff47fc8;
    *(uint *)(puVar2 + 4) = uVar7 + 1;
    *(undefined4 *)(puVar2 + uVar7 * 4 + 8) = param_2;
    FUN_ram_4ff21966(puVar1);
    uVar3 = 0;
  }
  else {
LAB_ram_4819c192:
    FUN_ram_4ff21966(PTR_DAT_ram_4ff59f08_ram_4ff47fc8);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


