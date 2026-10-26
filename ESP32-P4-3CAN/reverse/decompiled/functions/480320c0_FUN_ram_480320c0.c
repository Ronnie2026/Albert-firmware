/* Firmware entry: 0x480320c0 */

undefined4 FUN_ram_480320c0(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = &local_30;
  iVar4 = FUN_ram_4812d062();
  if (iVar4 != 0) {
    local_30 = 0;
    uVar3 = *(uint *)(iVar4 + 0xc);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    iVar4 = FUN_ram_480001f0();
    if (iVar4 != 0) {
      puVar6 = (undefined1 *)(iVar4 + 0x90);
      puVar7 = &local_30;
      do {
        uVar1 = *puVar6;
        puVar8 = (undefined1 *)((int)puVar7 + 1);
        puVar6 = puVar6 + 1;
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)puVar8;
      } while (puVar8 != auStack_10);
      DAT_ram_501080b0 = FUN_ram_480311a6(uVar3,&local_30);
      DAT_ram_5010808c = ~uVar3;
      iVar4 = 0;
      DAT_ram_50108088 = uVar3;
      do {
        iVar9 = iVar4 + 1;
        (&DAT_ram_50108090)[iVar4] = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        iVar4 = iVar9;
      } while (iVar9 != 0x20);
      DAT_ram_501080b4 = ~DAT_ram_501080b0;
      DAT_ram_50108084 = 0xb0abbead;
      fence();
      DAT_ram_50108080 = 0x4f544152;
      fence();
      uVar5 = FUN_ram_48031218();
      return uVar5;
    }
  }
  return 0;
}


