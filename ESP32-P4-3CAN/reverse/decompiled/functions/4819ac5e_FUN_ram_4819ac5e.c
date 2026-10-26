/* Firmware entry: 0x4819ac5e */

undefined4 FUN_ram_4819ac5e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (undefined4 *)0x0) && (param_1[10] == 0)) {
    FUN_ram_4819a44c();
  }
  uVar2 = *(ushort *)(param_2 + 3);
  param_2[1] = 0;
  if ((uVar2 & 0x20) != 0) {
    return 0xffffffff;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 0x10) != 0) {
      if ((uVar2 & 8) != 0) {
        iVar1 = _fflush_r(param_1,param_2);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        param_2[2] = 0;
        param_2[6] = 0;
        uVar2 = *(ushort *)(param_2 + 3) & 0xfff7;
      }
      *(ushort *)(param_2 + 3) = uVar2 | 4;
      goto LAB_ram_4819acd4;
    }
    *param_1 = 9;
  }
  else {
    if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        FUN_ram_4ff450c2(param_1);
      }
      param_2[0xd] = 0;
      param_2[1] = param_2[0x10];
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        goto LAB_ram_4819ac9e;
      }
    }
LAB_ram_4819acd4:
    if (param_2[4] == 0) {
      __smakebuf_r(param_1,param_2);
    }
    uVar2 = *(ushort *)(param_2 + 3);
    if ((uVar2 & 3) != 0) {
      *(undefined2 *)(param_2 + 3) = 1;
      FUN_ram_4819a962(&DAT_ram_4ff4bb0c,&LAB_ram_4819ac32,&DAT_ram_4ff4bb00);
      *(ushort *)(param_2 + 3) = uVar2;
      if ((uVar2 & 9) == 9) {
        FUN_ram_4819a0a6(param_1,param_2);
      }
    }
    *param_2 = param_2[4];
    iVar1 = (*(code *)param_2[9])(param_1,param_2[8],param_2[4],param_2[5]);
    param_2[1] = iVar1;
    if (0 < iVar1) {
LAB_ram_4819ac9e:
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar2 = *(ushort *)(param_2 + 3);
    if (iVar1 == 0) {
      uVar2 = uVar2 | 0x20;
      goto LAB_ram_4819ac98;
    }
    param_2[1] = 0;
  }
  uVar2 = uVar2 | 0x40;
LAB_ram_4819ac98:
  *(ushort *)(param_2 + 3) = uVar2;
  return 0xffffffff;
}


