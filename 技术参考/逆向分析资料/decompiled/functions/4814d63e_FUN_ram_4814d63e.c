/* Firmware entry: 0x4814d63e */

void FUN_ram_4814d63e(int *param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 2) = 0xf;
  piVar3 = param_1 + 0x1df;
  cVar2 = '\x0f';
  do {
    cVar1 = cVar2 + -1;
    *(char *)((int)piVar3 + 0x8e) = cVar2;
    piVar3[0x22] = (int)piVar3;
    piVar3 = piVar3 + -0x22;
    cVar2 = cVar1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[3] = (int)(param_1 + 0x201);
  param_1[1] = 0x1ffff;
  return;
}


