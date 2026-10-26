/* Firmware entry: 0x481330ca */

int FUN_ram_481330ca(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == -1) {
    return 0x106;
  }
  iVar1 = param_2 * 8;
  if (((uint)(&DAT_ram_4ff4b9a4)[param_2 * 2] >> 4 & 1) != 0) goto LAB_ram_48133132;
  uVar4 = (&DAT_ram_4ff4b9a4)[param_2 * 2] & 0xf;
  if (3 < uVar4 - 5) {
    if (param_3 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"system_api","E (%lu) %s: MAC address (type %d) is not set in mac table\n",
                       uVar3,"system_api",uVar4);
    }
    return 0x10b;
  }
  if (uVar4 - 5 < 2) {
    uVar4 = FUN_ram_48000386(&PTR_DAT_ram_481e39c4_ram_4ff47fcc);
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("mac_addr.c",0x110,"get_efuse_factory_mac","(size_bits % 8) == 0");
    }
    iVar2 = FUN_ram_48000378(&PTR_DAT_ram_481e39c4_ram_4ff47fcc,iVar1 + 0x4ff4b9a6,uVar4);
LAB_ram_4813318a:
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else if (uVar4 == 7) {
    iVar2 = FUN_ram_48133016(iVar1 + 0x4ff4b9a6);
    goto LAB_ram_4813318a;
  }
  *(byte *)(&DAT_ram_4ff4b9a4 + param_2 * 2) =
       *(byte *)(&DAT_ram_4ff4b9a4 + param_2 * 2) & 0xf | 0x10;
LAB_ram_48133132:
  FUN_ram_4ff45158(param_1,iVar1 + 0x4ff4b9a6,*(undefined1 *)((int)&DAT_ram_4ff4b9a4 + iVar1 + 1));
  return 0;
}


