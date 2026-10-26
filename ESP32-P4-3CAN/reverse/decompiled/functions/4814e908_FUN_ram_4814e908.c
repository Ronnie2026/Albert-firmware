/* Firmware entry: 0x4814e908 */

void FUN_ram_4814e908(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar2 = FUN_ram_481460ca(param_1,iVar1 + 0x40,0);
  if (iVar2 == 0) {
    if (*(char *)(iVar1 + 6) != -1) {
      *(char *)(iVar1 + 6) = *(char *)(iVar1 + 6) + '\x01';
    }
    FUN_ram_48142636(500,&LAB_ram_4814e958,param_1);
    return;
  }
  return;
}


