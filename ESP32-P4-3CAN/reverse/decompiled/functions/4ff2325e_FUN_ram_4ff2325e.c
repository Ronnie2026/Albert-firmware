/* Firmware entry: 0x4ff2325e */

bool FUN_ram_4ff2325e(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar4 = false;
  if ((((param_2[7] != '\0') && (bVar4 = false, *param_1 == 0x3fd)) && ((char)param_1[1] == '\b'))
     && ((*(byte *)((int)param_1 + 5) & 7) == 0)) {
    if (*(char *)((int)param_1 + 0xd) == '\x02') {
      cVar1 = param_2[2];
    }
    else {
      cVar1 = *param_2;
    }
    bVar4 = false;
    if (cVar1 != '\0') {
      bVar2 = *(byte *)(param_1 + 3);
      if ((param_3 != 0) || (bVar3 = bVar2 | 0x10, param_2[0x15] != '\0')) {
        bVar3 = bVar2 & 0xef;
      }
      bVar4 = bVar2 != bVar3;
      *(byte *)(param_1 + 3) = bVar3;
    }
  }
  return bVar4;
}


