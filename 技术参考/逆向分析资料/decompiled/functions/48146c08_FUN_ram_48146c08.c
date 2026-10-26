/* Firmware entry: 0x48146c08 */

void FUN_ram_48146c08(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (7 < *(ushort *)(param_1 + 10)) {
    pcVar4 = *(char **)(param_1 + 4);
    iVar1 = FUN_ram_48151aa6(pcVar4,*(ushort *)(param_1 + 10));
    if ((iVar1 == 0) && (piVar2 = *(int **)(param_2 + 0xcc), piVar2 != (int *)0x0)) {
      piVar3 = piVar2;
      do {
        if (piVar3[1] == *param_3) {
          if (*pcVar4 != '\x11') {
            if ((*pcVar4 == '\x16') && (*(char *)((int)piVar3 + 9) == '\x01')) {
              piVar3[2] = 0x200;
            }
            goto LAB_ram_48146c6a;
          }
          iVar1 = *(int *)(pcVar4 + 4);
          if (DAT_ram_4ff6e220 == *param_3) {
            if (iVar1 == 0) {
              if (pcVar4[1] == '\0') {
                pcVar4[1] = '\n';
              }
              for (piVar2 = (int *)*piVar2; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
                FUN_ram_48146a0e(piVar2,pcVar4[1]);
              }
              goto LAB_ram_48146c6a;
            }
            goto LAB_ram_48146cec;
          }
          piVar2 = piVar3;
          if (iVar1 != 0) goto LAB_ram_48146cba;
          goto LAB_ram_48146c6a;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  FUN_ram_4813ac74(param_1);
  return;
LAB_ram_48146cba:
  FUN_ram_48146a0e(piVar2,pcVar4[1]);
  goto LAB_ram_48146c6a;
  while (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0) {
LAB_ram_48146cec:
    if (piVar2[1] == iVar1) goto LAB_ram_48146cba;
  }
LAB_ram_48146c6a:
  FUN_ram_4813ac74(param_1);
  return;
}


