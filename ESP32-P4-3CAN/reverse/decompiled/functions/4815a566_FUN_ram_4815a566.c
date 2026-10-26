/* Firmware entry: 0x4815a566 */

undefined4 FUN_ram_4815a566(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_14);
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x102;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    if (param_1 == 0) {
      uVar1 = FUN_ram_4815d276();
      iVar2 = FUN_ram_4815d31e(uVar1,&DAT_ram_481c3efc);
    }
    else {
      uVar1 = FUN_ram_4815d276();
      iVar2 = FUN_ram_4815d31e(uVar1,param_1);
    }
    if (iVar2 == 0) {
      uVar1 = 0x1101;
    }
    else {
      iVar3 = FUN_ram_4815c31e();
      uVar1 = 0x110b;
      if (iVar3 != 0) {
        uVar1 = FUN_ram_4815cef0(iVar2,param_2);
      }
    }
  }
  FUN_ram_4815d7f0(auStack_14);
  return uVar1;
}


