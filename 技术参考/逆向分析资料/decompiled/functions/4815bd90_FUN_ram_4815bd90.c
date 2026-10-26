/* Firmware entry: 0x4815bd90 */

undefined4 FUN_ram_4815bd90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_34;
  undefined1 auStack_30 [2];
  byte bStack_2e;
  undefined1 auStack_28 [16];
  int iStack_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *(int *)(param_1 + 0x10);
  do {
    if (iVar4 == 0) {
      return 0;
    }
    iStack_34 = 0;
    while (iVar1 = FUN_ram_4815af12(iVar4,0xff,0x48,0,&iStack_34,auStack_30,0xff), iVar1 == 0) {
      piVar2 = (int *)FUN_ram_4ff20824(0x28,2,0x1400,0x1800);
      if (piVar2 == (int *)0x0) {
        return 0x101;
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      FUN_ram_4ff45594(piVar2 + 2,auStack_28,0x10);
      *(undefined1 *)((int)piVar2 + 0x17) = 0;
      piVar2[8] = 0;
      *(undefined1 *)(piVar2 + 6) = auStack_30[0];
      piVar2[9] = 0;
      *(undefined1 *)((int)piVar2 + 0x1a) = uStack_13;
      *(undefined1 *)((int)piVar2 + 0x19) = uStack_14;
      iVar3 = param_2[1];
      piVar2[7] = iStack_18;
      iVar1 = 0;
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar2;
        iVar1 = param_2[1];
      }
      piVar2[1] = 0;
      *piVar2 = iVar1;
      param_2[1] = (int)piVar2;
      if (*param_2 == 0) {
        *param_2 = (int)piVar2;
      }
      param_2[2] = param_2[2] + 1;
      iStack_34 = iStack_34 + (uint)bStack_2e;
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}


