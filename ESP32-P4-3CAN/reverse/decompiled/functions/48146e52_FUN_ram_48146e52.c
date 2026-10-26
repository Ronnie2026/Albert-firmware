/* Firmware entry: 0x48146e52 */

undefined4 FUN_ram_48146e52(int param_1,uint *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *param_2;
  if (((((uVar3 & 0xf0) != 0xe0) || (uVar3 == DAT_ram_4ff6e220)) ||
      ((*(byte *)(param_1 + 0xe7) & 0x20) == 0)) ||
     (piVar4 = *(int **)(param_1 + 0xcc), piVar2 = piVar4, piVar4 == (int *)0x0)) {
    return 0xfffffffa;
  }
  while (uVar3 != piVar2[1]) {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return 0xfffffffa;
    }
  }
  if (*(byte *)(piVar2 + 3) < 2) {
    do {
      piVar5 = (int *)*piVar4;
      if (piVar5 == piVar2) {
        *piVar4 = *piVar2;
        cVar1 = (char)piVar2[2];
        goto joined_r0x48146eea;
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)0x0);
    cVar1 = (char)piVar2[2];
joined_r0x48146eea:
    if (cVar1 != '\0') {
      FUN_ram_48146902(param_1,piVar2,0x17);
    }
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))(param_1,param_2,0);
    }
    FUN_ram_48139604(0xb,piVar2);
  }
  else {
    *(byte *)(piVar2 + 3) = *(byte *)(piVar2 + 3) - 1;
  }
  return 0;
}


