/* Firmware entry: 0x4818899a */

int FUN_ram_4818899a(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
    if (((*param_1 != *param_2) || (param_1[1] != param_2[1])) ||
       (iVar2 = FUN_ram_4ff4511a(param_1[2],param_2[2]), iVar2 != 0)) {
      return -1;
    }
    iVar2 = param_1[3];
    iVar7 = param_2[3];
    if (((iVar2 != iVar7) || (param_1[4] != param_2[4])) ||
       (iVar3 = FUN_ram_4ff4511a(param_1[5],param_2[5]), iVar3 != 0)) {
      if ((iVar2 != 0xc) && (iVar2 != 0x13)) {
        return -1;
      }
      if ((iVar7 != 0xc) && (iVar7 != 0x13)) {
        return -1;
      }
      iVar2 = param_1[4];
      if (iVar2 != param_2[4]) {
        return -1;
      }
      pbVar6 = (byte *)param_1[5];
      pbVar5 = (byte *)param_2[5];
      if (iVar2 != 0) {
        pbVar4 = pbVar6 + iVar2;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (bVar1 != *pbVar5) {
            if ((bVar1 ^ *pbVar5) != 0x20) {
              return -1;
            }
            if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
              return -1;
            }
          }
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != pbVar4);
      }
    }
    if ((char)param_1[7] != (char)param_2[7]) {
      return -1;
    }
    param_1 = (int *)param_1[6];
    param_2 = (int *)param_2[6];
    if (param_1 == (int *)0x0) {
      return -(uint)(param_2 != (int *)0x0);
    }
    if (param_2 == (int *)0x0) {
      return -1;
    }
  } while( true );
}


