/* Firmware entry: 0x48032586 */

void FUN_ram_48032586(int *param_1)

{
  int iVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_28 = 0;
  iStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  iVar1 = FUN_ram_48138eae(param_1 + 1,&iStack_28,&LAB_ram_48031d2a,param_1,2);
  if (iVar1 != 0) {
    if (iVar1 != -5) {
      *(undefined1 *)(param_1 + 0x68) = 0;
      iVar1 = *param_1;
      *param_1 = 3;
      if (iVar1 == 2) goto LAB_ram_480325d2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  param_1[0x62] = iStack_28;
  param_1[99] = iStack_24;
  param_1[100] = iStack_20;
  param_1[0x65] = iStack_1c;
  param_1[0x66] = iStack_18;
  param_1[0x67] = iStack_14;
  iVar1 = *param_1;
  *param_1 = 3;
  if (iVar1 != 2) {
    return;
  }
LAB_ram_480325d2:
  fence();
  *param_1 = 0;
  return;
}


