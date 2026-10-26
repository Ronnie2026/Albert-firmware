/* Firmware entry: 0x480068a2 */

undefined4 FUN_ram_480068a2(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47e0c,0xffffffff);
  piVar1 = DAT_ram_4ff6daa8;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47e0c);
      return 2;
    }
    if (param_1 == *piVar1) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47e0c);
  piVar1 = (int *)FUN_ram_4ff3d626(0,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_ram_4ff45080(1,4);
    if (piVar1 != (int *)0x0) {
      FUN_ram_4ff3e87e(0,0,piVar1,&DAT_ram_480067da);
      goto LAB_ram_480068f0;
    }
LAB_ram_480069a8:
    uVar3 = 0xc;
  }
  else {
LAB_ram_480068f0:
    piVar4 = (int *)*piVar1;
    for (piVar2 = piVar4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (param_1 == *piVar2) {
        if (param_2 == 0) {
          if (piVar4 == piVar2) {
            *piVar1 = piVar2[2];
          }
          else {
            do {
              piVar1 = piVar4;
              piVar4 = (int *)piVar1[2];
            } while (piVar4 != piVar2);
            piVar1[2] = piVar2[2];
          }
          thunk_FUN_ram_4ff209c6();
        }
        else {
          piVar2[1] = param_2;
        }
        goto LAB_ram_4800690a;
      }
    }
    if (param_2 != 0) {
      piVar2 = (int *)thunk_FUN_ram_4ff2070c(0xc);
      if (piVar2 == (int *)0x0) goto LAB_ram_480069a8;
      iVar5 = *piVar1;
      *piVar2 = param_1;
      piVar2[1] = param_2;
      if (iVar5 == 0) {
        piVar2[2] = 0;
        *piVar1 = (int)piVar2;
      }
      else {
        do {
          iVar6 = iVar5;
          iVar5 = *(int *)(iVar6 + 8);
        } while (iVar5 != 0);
        piVar2[2] = 0;
        *(int **)(iVar6 + 8) = piVar2;
      }
    }
LAB_ram_4800690a:
    uVar3 = 0;
  }
  return uVar3;
}


