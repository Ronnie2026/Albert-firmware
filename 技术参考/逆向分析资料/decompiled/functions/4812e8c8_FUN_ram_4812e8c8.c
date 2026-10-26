/* Firmware entry: 0x4812e8c8 */

undefined4 FUN_ram_4812e8c8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4ff20626();
  uVar1 = (uint)*(ushort *)(param_1 + 0xf);
  if (uVar2 < uVar1) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"boot_comm",
                     "E (%lu) %s: chip revision check failed. Required >= v%d.%d, found v%d.%d.\n",
                     uVar4,"boot_comm",uVar1 / 100,uVar1 % 100,uVar2 / 100,uVar2 % 100);
    return 0;
  }
  if ((((param_2 != 0) && (uVar1 = (uint)*(ushort *)(param_1 + 0x11), (uVar1 - 1 & 0xffff) < 0xfffe)
       ) && (uVar1 < uVar2)) && (iVar3 = FUN_ram_4ff20664(), iVar3 == 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"boot_comm",
                     "E (%lu) %s: chip revision check failed. Required <= v%d.%d, found v%d.%d.\n",
                     uVar4,"boot_comm",uVar1 / 100,uVar1 % 100,uVar2 / 100,uVar2 % 100);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  return 1;
}


