/* Firmware entry: 0x4809a7b2 */

void FUN_ram_4809a7b2(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char cStack_12c;
  char cStack_12b;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined2 uStack_124;
  undefined1 auStack_120 [264];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_2 + 0x874;
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  cVar1 = *(char *)(param_2 + 0x2bd4);
  FUN_ram_4ff45158(auStack_120,param_2 + 0x2ad4,0x100);
  FUN_ram_4ff3ee10(iVar2);
  if ((*(char *)(param_1 + 0x18c69) == '\0') && (cVar1 != '\0')) {
    FUN_ram_4802d92a(&cStack_12c,auStack_120,cVar1);
    if (cStack_12c != '\0') goto LAB_ram_4809a864;
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    *(undefined1 *)(param_2 + 0x308d) = 0;
    *(char *)(param_2 + 0x308e) = cStack_12b;
    *(undefined2 *)(param_2 + 0x3090) = uStack_12a;
    *(undefined2 *)(param_2 + 0x3092) = uStack_128;
    if (cStack_12b != '\0') {
      *(undefined2 *)(param_2 + 0x3094) = uStack_126;
      goto LAB_ram_4809a888;
    }
    *(undefined2 *)(param_2 + 0x3094) = 0;
  }
  else {
LAB_ram_4809a864:
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    *(undefined1 *)(param_2 + 0x308e) = 0;
    *(undefined4 *)(param_2 + 0x3090) = 0;
    *(undefined2 *)(param_2 + 0x3094) = 0;
    *(undefined1 *)(param_2 + 0x308d) = 1;
  }
  uStack_124 = 0;
LAB_ram_4809a888:
  *(undefined2 *)(param_2 + 0x3096) = uStack_124;
  FUN_ram_4ff3ee10(iVar2);
  return;
}


