/* Firmware entry: 0x48191c3c */

undefined4
FUN_ram_48191c3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(uint *)(param_5 + 0x6c4);
  if (uVar5 == 2) goto LAB_ram_48191d3c;
  if (2 < uVar5) {
    if (uVar5 == 3) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: failed to open a new connection\n",uVar1,
                       &DAT_ram_481e1b30);
      return 0xffffffff;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: invalid esp-tls state\n",uVar1,
                     &DAT_ram_481e1b30);
    return 0xffffffff;
  }
  if (uVar5 == 0) {
    *(undefined4 *)(param_5 + 0x6b8) = 0xffffffff;
    if ((param_4 != 0) && (*(char *)(param_4 + 0x4c) == '\0')) {
      FUN_ram_48194188(param_5 + 0x378);
      *(undefined1 *)(param_5 + 0x6d8) = 1;
    }
    iVar6 = FUN_ram_481915ba(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x6e0),
                             param_5 + 0x6b8);
    if (iVar6 != 0) {
      FUN_ram_48192182(*(undefined4 *)(param_5 + 0x6e0),4,iVar6);
      return 0xffffffff;
    }
    if (*(char *)(param_5 + 0x6d8) == '\0') {
      *(undefined1 **)(param_5 + 0x6bc) = &LAB_ram_48191c32;
      *(undefined1 **)(param_5 + 0x6c0) = &LAB_ram_48191c28;
      return 1;
    }
    if ((param_4 != 0) && (*(char *)(param_4 + 0x2c) != '\0')) {
      uVar5 = *(uint *)(param_5 + 0x6b8);
      *(undefined4 *)(param_5 + 0x6cc) = 0;
      *(undefined4 *)(param_5 + 0x6c8) = 0;
      if (uVar5 < 0x40) {
        iVar6 = ((int)uVar5 >> 5) * 4 + param_5;
        *(uint *)(iVar6 + 0x6c8) = *(uint *)(iVar6 + 0x6c8) | 1 << (uVar5 & 0x1f);
      }
      *(undefined4 *)(param_5 + 0x6d0) = *(undefined4 *)(param_5 + 0x6c8);
      *(undefined4 *)(param_5 + 0x6d4) = *(undefined4 *)(param_5 + 0x6cc);
      *(undefined4 *)(param_5 + 0x6c4) = 1;
      goto LAB_ram_48191c6e;
    }
    *(undefined4 *)(param_5 + 0x6c4) = 1;
  }
  else if ((param_4 != 0) && (*(char *)(param_4 + 0x2c) != '\0')) {
    uVar5 = *(uint *)(param_5 + 0x6b8);
LAB_ram_48191c6e:
    iVar6 = *(int *)(param_4 + 0x30);
    piVar3 = (int *)0x0;
    iStack_30 = iVar6 / 1000;
    iStack_2c = iStack_30 >> 0x1f;
    iStack_28 = (iVar6 % 1000) * 1000;
    if (0 < iVar6) {
      piVar3 = &iStack_30;
    }
    iVar6 = FUN_ram_4800e594(uVar5 + 1,param_5 + 0x6c8,param_5 + 0x6d0,0,piVar3);
    if (iVar6 == 0) {
      return 0;
    }
    uVar5 = *(uint *)(param_5 + 0x6b8);
    if (uVar5 < 0x40) {
      iVar6 = ((int)uVar5 >> 5) * 4 + param_5;
      uVar4 = 1 << (uVar5 & 0x1f);
      if (((*(uint *)(iVar6 + 0x6c8) & uVar4) != 0) || ((uVar4 & *(uint *)(iVar6 + 0x6d0)) != 0)) {
        uStack_34 = 4;
        iVar6 = FUN_ram_481371ec(uVar5,0xfff,0x1007,auStack_38,&uStack_34);
        if (iVar6 < 0) {
          uVar1 = *(undefined4 *)(param_5 + 0x6e0);
          puVar2 = (undefined4 *)FUN_ram_4819bf88();
          FUN_ram_48192182(uVar1,1,*puVar2);
          FUN_ram_48192182(*(undefined4 *)(param_5 + 0x6e0),4,0x8005);
          *(undefined4 *)(param_5 + 0x6c4) = 3;
          return 0xffffffff;
        }
      }
    }
  }
  iVar6 = FUN_ram_48192e58(param_1,param_2,param_4,param_5,0);
  if (iVar6 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: create_ssl_handle failed\n",uVar1,
                     &DAT_ram_481e1b30);
    FUN_ram_48192182(*(undefined4 *)(param_5 + 0x6e0),4,iVar6);
    *(undefined4 *)(param_5 + 0x6c4) = 3;
    return 0xffffffff;
  }
  *(undefined1 **)(param_5 + 0x6bc) = &LAB_ram_48192244;
  *(code **)(param_5 + 0x6c0) = FUN_ram_481922de;
  *(undefined4 *)(param_5 + 0x6c4) = 2;
LAB_ram_48191d3c:
  uVar1 = FUN_ram_481927a4(param_5,param_4);
  return uVar1;
}


