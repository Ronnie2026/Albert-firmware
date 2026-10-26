/* Firmware entry: 0x481055bc */

void FUN_ram_481055bc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((((*(char *)(param_2 + 0x71) != '\0') && (*(char *)(param_2 + 0x76) != '\0')) &&
        (*(char *)(param_2 + 0x78) != '\0')) &&
       (((*(char *)(param_2 + 0x72) == '\0' && (*(char *)(param_1 + 0x911) != '\0')) &&
        ((*(char *)(param_1 + 0x90f) != '\0' &&
         (((uint)(param_3 - *(int *)(param_1 + 0x908)) < 0x12d && (*(int *)(param_1 + 0xba8) != 0)))
         ))))) && ((uint)(param_3 - *(int *)(param_1 + 0xba8)) < 0x12d)) &&
     (((((*(char *)(param_1 + 0x91c) != '\0' && (*(char *)(param_1 + 0x91d) != '\0')) &&
        ((uint)(param_3 - *(int *)(param_1 + 0x918)) < 0x12d)) &&
       (iVar2 = *(int *)(param_1 + 0x904), iVar2 != 0)) &&
      ((*(char *)(param_1 + 0x931) == '\0' || (iVar2 != *(int *)(param_1 + 0x92c))))))) {
    iVar1 = *(int *)(param_1 + 0x928) + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x928) = iVar1;
    *(int *)(param_1 + 0x92c) = iVar2;
    *(undefined2 *)(param_1 + 0x930) = 0x100;
  }
  return;
}


