/* Firmware entry: 0x480c3eaa */

undefined1 FUN_ram_480c3eaa(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *param_1;
  iVar3 = iVar4 + 0xb18;
  FUN_ram_4ff3ec14(iVar3,0xffffffff);
  cVar1 = *(char *)(iVar4 + 0xb39);
  FUN_ram_4ff3ee10(iVar3);
  cVar2 = *(char *)(*param_1 + 0x36);
  if ((cVar1 == '\f') || (cVar1 == '\x0e')) {
    if ((cVar2 == '\0') && (*(char *)(*param_1 + 0x37) != '\0')) goto LAB_ram_480c3f1a;
  }
  else if (cVar2 == '\0') {
LAB_ram_480c3f1a:
    if (param_2 < 0x32) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 3;
    }
    if ((char)param_1[0xa0] == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (*(char *)((int)param_1 + 0x281) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (*(char *)((int)param_1 + 0x282) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (0x5dc < (uint)(param_3 - param_1[0xa2])) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if ((char)param_1[0xa1] == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 2;
    }
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return *(undefined1 *)((int)param_1 + 0x283);
  }
  return 4;
}


