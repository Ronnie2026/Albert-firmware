/* Firmware entry: 0x4812e238 */

int * FUN_ram_4812e238(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("partition.c",0x181,"esp_partition_verify","partition != NULL");
  }
  piVar2 = (int *)0x0;
  if ((char)param_1[6] != '\0') {
    piVar2 = param_1 + 6;
  }
  iVar1 = FUN_ram_4812e16a(param_1[1],param_1[2],piVar2);
  while( true ) {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    piVar2 = *(int **)(iVar1 + 0x10);
    if ((((*piVar2 == *param_1) && (piVar2[3] == param_1[3])) && (param_1[4] == piVar2[4])) &&
       (*(char *)((int)param_1 + 0x29) == *(char *)((int)piVar2 + 0x29))) break;
    iVar1 = FUN_ram_4812e094();
  }
  thunk_FUN_ram_4ff209c6();
  return piVar2;
}


