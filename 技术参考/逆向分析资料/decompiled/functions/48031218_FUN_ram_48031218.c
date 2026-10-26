/* Firmware entry: 0x48031218 */

bool FUN_ram_48031218(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = DAT_ram_501080b0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_50108080 != 0x4f544152) {
    return false;
  }
  fence();
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar5 = 0;
  puVar4 = &uStack_30;
  do {
    puVar1 = &DAT_ram_50108090 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined1 *)puVar4 = *puVar1;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (iVar5 != 0x20);
  if (((DAT_ram_50108084 == -0x4f544153) && (DAT_ram_5010808c == ~DAT_ram_50108088)) &&
     (DAT_ram_501080b4 == ~DAT_ram_501080b0)) {
    uVar3 = FUN_ram_480311a6(DAT_ram_50108088,&uStack_30);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return uVar3 == uVar2;
  }
  return false;
}


