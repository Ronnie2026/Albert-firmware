/* Firmware entry: 0x4819e178 */

int FUN_ram_4819e178(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) == iVar3) {
    puVar2 = (uint *)(param_1 + 0x14) + iVar3;
    puVar1 = (uint *)(param_2 + 0x14 + iVar3 * 4);
    do {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      if (*puVar2 != *puVar1) {
        if (*puVar1 <= *puVar2) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        return -1;
      }
    } while ((uint *)(param_1 + 0x14) < puVar2);
  }
  return *(int *)(param_1 + 0x10) - iVar3;
}


