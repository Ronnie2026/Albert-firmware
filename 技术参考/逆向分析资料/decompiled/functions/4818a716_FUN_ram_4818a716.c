/* Firmware entry: 0x4818a716 */

int FUN_ram_4818a716(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iStack_1c;
  undefined1 uStack_18;
  undefined1 *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_1c = 0;
  uStack_18 = 0;
  puStack_14 = (undefined1 *)0x0;
  iVar1 = FUN_ram_4817f620(param_1,param_2,&iStack_1c);
  if (iVar1 != 0) {
    return iVar1 + -0x2500;
  }
  if (iStack_1c != 0) {
    if (iStack_1c == 1) {
      *param_3 = *puStack_14;
      iVar1 = 0;
    }
    else {
      iVar1 = -0x2564;
    }
    return iVar1;
  }
  *param_3 = 0;
  return 0;
}


