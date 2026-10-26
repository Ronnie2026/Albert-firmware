/* Firmware entry: 0x4812e094 */

int * FUN_ram_4812e094(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("partition.c",0x148,"esp_partition_next","it");
  }
  if (param_1[3] != 0) {
    FUN_ram_4ff216d6(&DAT_ram_4ff6e0a0);
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      iVar3 = *param_1;
      do {
        if (iVar3 != 0xff) {
          while (iVar3 != *(int *)(iVar1 + 4)) {
            iVar1 = *(int *)(iVar1 + 0x30);
            param_1[3] = iVar1;
            if (iVar1 == 0) goto LAB_ram_4812e0da;
          }
        }
        if (((param_1[1] == 0xff) || (param_1[1] == *(int *)(iVar1 + 8))) &&
           ((param_1[2] == 0 || (iVar2 = FUN_ram_4ff453ae(param_1[2],iVar1 + 0x18), iVar2 == 0))))
        break;
        iVar1 = *(int *)(iVar1 + 0x30);
        param_1[3] = iVar1;
      } while (iVar1 != 0);
    }
LAB_ram_4812e0da:
    FUN_ram_4ff216e2(&DAT_ram_4ff6e0a0);
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x30);
      param_1[4] = iVar1;
      param_1[3] = iVar3;
      return param_1;
    }
  }
  thunk_FUN_ram_4ff209c6(param_1);
  return (int *)0x0;
}


