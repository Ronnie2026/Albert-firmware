/* Firmware entry: 0x4818b2b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4818b2b2(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_7 - 0x18U & 0xffff) < 0x19) && ((0x1000101U >> (param_7 - 0x18U & 0x1f) & 1) != 0)) {
    if ((_DAT_ram_50096020 & 3) == 0) {
      FUN_ram_4818b134();
      _DAT_ram_5009601c = _DAT_ram_5009601c | 1;
      do {
      } while ((_DAT_ram_50096020 & 3) != 1);
      iVar2 = 0;
      do {
        puVar3 = (undefined4 *)(param_2 + iVar2);
        puVar1 = (undefined4 *)(iVar2 + 0x50096440);
        iVar2 = iVar2 + 4;
        *puVar1 = *puVar3;
      } while (iVar2 < param_7);
      iVar2 = 0;
      do {
        puVar3 = (undefined4 *)(param_3 + iVar2);
        puVar1 = (undefined4 *)(iVar2 + 0x500963e0);
        iVar2 = iVar2 + 4;
        *puVar1 = *puVar3;
      } while (iVar2 < param_7);
      iVar2 = 0;
      do {
        puVar1 = (undefined4 *)(param_4 + iVar2);
        puVar3 = (undefined4 *)(iVar2 + 0x50096410);
        iVar2 = iVar2 + 4;
        *puVar3 = *puVar1;
      } while (iVar2 < param_7);
      iVar2 = 0;
      do {
        puVar1 = (undefined4 *)(param_5 + iVar2);
        puVar3 = (undefined4 *)(iVar2 + 0x50096470);
        iVar2 = iVar2 + 4;
        *puVar3 = *puVar1;
      } while (iVar2 < param_7);
      iVar2 = 0;
      do {
        puVar1 = (undefined4 *)(param_6 + iVar2);
        puVar3 = (undefined4 *)(iVar2 + 0x500964a0);
        iVar2 = iVar2 + 4;
        *puVar3 = *puVar1;
      } while (iVar2 < param_7);
      _DAT_ram_5009601c = _DAT_ram_5009601c | 2;
      do {
      } while ((_DAT_ram_50096020 & 3) != 0);
      return (_DAT_ram_50096024 & 1) - 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/hal/ecdsa_hal.c",0xb7,&DAT_ram_481e0b40,
                     "false && \"Incorrect ECDSA state\"");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/hal/ecdsa_hal.c",0xb3,&DAT_ram_481e0b40,
                   "false && \"Incorrect length\"");
}


