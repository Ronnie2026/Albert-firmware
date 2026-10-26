/* Firmware entry: 0x4ff385e0 */

int FUN_ram_4ff385e0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  if (param_3 != (int *)0x0) {
    param_3[1] = 0;
  }
  FUN_ram_4ff3ea14(param_1,&uStack_2c);
  *param_2 = param_1;
  param_2[1] = iStack_28;
  param_2[2] = iStack_24;
  iVar1 = FUN_ram_4ff21474();
  if (((iVar1 == 0) || (DAT_ram_4ff6e11c != '\0')) &&
     (iVar1 = FUN_ram_4ff3e7ea(mhartid), param_1 == iVar1)) {
    param_2[1] = DAT_ram_4ff6db34;
  }
  iVar1 = FUN_ram_4ff3a740(param_2);
  if ((iVar1 != 0) && (iVar2 = FUN_ram_4ff3e7ea(mhartid), param_1 == iVar2)) {
    FUN_ram_4ff3a90e();
    iVar2 = FUN_ram_4ff21474();
    if ((iVar2 != 0) && (DAT_ram_4ff6e11c == '\0')) {
      if (param_3 != (int *)0x0) {
        iVar2 = param_2[1];
        param_3[1] = (param_2[2] + 3) - iVar2 & 0xfffffffc;
        *param_3 = iVar2;
      }
      param_2[1] = DAT_ram_4ff6db34;
      iVar2 = FUN_ram_4ff3a60a();
      param_2[2] = iVar2;
    }
  }
  return iVar1;
}


