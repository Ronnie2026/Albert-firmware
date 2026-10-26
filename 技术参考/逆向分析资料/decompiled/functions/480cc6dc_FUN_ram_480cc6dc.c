/* Firmware entry: 0x480cc6dc */

void FUN_ram_480cc6dc(int *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
  FUN_ram_4ff3ee10(iVar1 + 0xb18);
  FUN_ram_480cc0a2(param_1,param_2);
  if ((char)param_1[0xa1] == '\0') {
    *(undefined1 *)((int)param_1 + 0x52d) = 0;
  }
  else if ((char)param_1[0x5d] != '\0') {
    param_1[0xa5] = param_1[0x55];
    param_1[0xa6] = param_1[0x56];
    bVar3 = *(byte *)((int)param_1 + 0x28e) & 0x3f;
    bVar4 = *(byte *)((int)param_1 + 0x28f) & 0x3f;
    param_1[0xac] = param_1[0x5c];
    *(byte *)((int)param_1 + 0x297) = bVar3;
    *(byte *)(param_1 + 0xa6) = bVar4;
    param_1[0xa4] = param_1[0x54];
    param_1[0xa7] = param_1[0x57];
    param_1[0xa8] = param_1[0x58];
    param_1[0xa9] = param_1[0x59];
    param_1[0xaa] = param_1[0x5a];
    param_1[0xab] = param_1[0x5b];
    bVar2 = *(byte *)((int)param_1 + 0x28f);
    if ((char)param_1[0xa3] == '\x01') {
      bVar2 = *(byte *)((int)param_1 + 0x28e);
    }
    bVar5 = *(byte *)((int)param_1 + 0x29b) & 0xef;
    if (bVar2 == 0) {
      bVar5 = *(byte *)((int)param_1 + 0x29b) | 0x10;
    }
    *(byte *)((int)param_1 + 0x29b) = bVar5;
    if ((param_1[0xa4] == 0x3c2) && ((char)param_1[0xa5] == '\b')) {
      *(byte *)(param_1 + 0x140) = bVar3;
      *(byte *)((int)param_1 + 0x501) = bVar4;
      *(byte *)((int)param_1 + 0x502) = bVar5;
      *(undefined1 *)((int)param_1 + 0x52d) = 1;
      return;
    }
  }
  return;
}


