/* Firmware entry: 0x48149f9a */

undefined4 FUN_ram_48149f9a(int param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  char cStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((char)param_2[4] == '\0') {
    uVar4 = *param_2;
    if ((uVar4 & 0xc0ff) == 0x80fe) {
      uStack_20 = param_2[1];
      uStack_1c = param_2[2];
      uStack_18 = param_2[3];
    }
    else {
      if (((uVar4 & 0x8fff) != 0x1ff) && ((uVar4 & 0x8fff) != 0x2ff)) goto LAB_ram_48149fd8;
      uStack_20 = param_2[1];
      uStack_1c = param_2[2];
      uStack_18 = param_2[3];
    }
    param_2 = &uStack_24;
    cStack_14 = *(char *)(param_1 + 0xea) + '\x01';
    uStack_24 = uVar4;
  }
LAB_ram_48149fd8:
  piVar2 = (int *)FUN_ram_48149c74(param_1,param_2);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    if (*(byte *)(piVar2 + 7) < 2) {
      piVar1 = *(int **)(param_1 + 0xd0);
      if (piVar2 == *(int **)(param_1 + 0xd0)) {
        *(int *)(param_1 + 0xd0) = *piVar2;
      }
      else {
        do {
          piVar5 = piVar1;
          if (piVar5 == (int *)0x0) goto LAB_ram_4814a01a;
          piVar1 = (int *)*piVar5;
        } while (piVar2 != (int *)*piVar5);
        *piVar5 = *piVar2;
      }
LAB_ram_4814a01a:
      if ((char)piVar2[6] != '\0') {
        FUN_ram_481499d0(param_1,piVar2,0x84);
      }
      if (*(code **)(param_1 + 0xf4) != (code *)0x0) {
        (**(code **)(param_1 + 0xf4))(param_1,param_2,0);
      }
      FUN_ram_48139604(0xf,piVar2);
    }
    else {
      *(byte *)(piVar2 + 7) = *(byte *)(piVar2 + 7) - 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


