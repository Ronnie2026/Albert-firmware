/* Firmware entry: 0x48151784 */

void FUN_ram_48151784(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined1 *)param_1[4];
  uVar2 = FUN_ram_48138eae(*param_1,param_1[1],&LAB_ram_4814f6da,param_1,
                           *(undefined1 *)(param_1 + 2));
  *puVar1 = uVar2;
  if (*(char *)param_1[4] == -5) {
    return;
  }
  FUN_ram_4814e3a4(param_1[3]);
  return;
}


