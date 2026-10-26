/* Firmware entry: 0x4818b134 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818b134(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((char)param_1[4] == '\0') {
    FUN_ram_48001912(param_1[1],param_1[3]);
    FUN_ram_4818ba48(0,1);
    iVar3 = *param_1;
    if (iVar3 == 1) goto LAB_ram_4818b1c8;
LAB_ram_4818b15e:
    if (iVar3 == 2) {
      uVar2 = _DAT_ram_50096004 & 0xfffffffc | 2;
      if (3 < (uint)param_1[1]) goto LAB_ram_4818b1de;
      _DAT_ram_50096004 = param_1[1] << 2 | _DAT_ram_50096004 & 0xfffffff0 | 2;
      iVar3 = param_1[5];
      goto joined_r0x4818b226;
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ecdsa_ll.h",0xd3,&DAT_ram_481e0b40,
                       "false && \"Unsupported mode\"");
    }
    uVar1 = param_1[1];
    uVar2 = _DAT_ram_50096004 & 0xfffffffc;
  }
  else {
    FUN_ram_4818ba48(0,0);
    iVar3 = *param_1;
    if (iVar3 != 1) goto LAB_ram_4818b15e;
LAB_ram_4818b1c8:
    uVar1 = param_1[1];
    uVar2 = _DAT_ram_50096004 & 0xfffffffc | 1;
  }
  if (3 < uVar1) {
LAB_ram_4818b1de:
    _DAT_ram_50096004 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ecdsa_ll.h",0xe7,&DAT_ram_481e0b40,
                     "false && \"Unsupported curve\"");
  }
  _DAT_ram_50096004 = uVar2 & 0xfffffff3 | uVar1 << 2;
  if (param_1[2] == 0) {
    _DAT_ram_50096004 = _DAT_ram_50096004 & 0xffffffdf;
  }
  else {
    if (param_1[2] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ecdsa_ll.h",0xfb,&DAT_ram_481e0b40,
                       "false && \"Unsupported curve\"");
    }
    _DAT_ram_50096004 = _DAT_ram_50096004 | 0x20;
  }
  iVar3 = param_1[5];
joined_r0x4818b226:
  if (iVar3 == 0) {
    _DAT_ram_50096004 = _DAT_ram_50096004 & 0xffffffbf;
    return;
  }
  if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ecdsa_ll.h",0x10f,&DAT_ram_481e0b40,
                     "false && \"Unsupported K type\"");
  }
  _DAT_ram_50096004 = _DAT_ram_50096004 | 0x40;
  return;
}


