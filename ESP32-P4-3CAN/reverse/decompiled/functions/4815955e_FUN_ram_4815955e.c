/* Firmware entry: 0x4815955e */

int FUN_ram_4815955e(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0xe7) & 1) == 0)) {
    return 0;
  }
  pbVar2 = (byte *)(iVar1 + 0x4c);
  pbVar4 = (byte *)(iVar1 + 0x94);
  do {
    if ((*pbVar4 & 0x10) == 0) goto LAB_ram_481595ce;
    if (DAT_ram_48237028 == pbVar2[0x14]) {
      if (DAT_ram_48237028 == 6) {
        if ((((*(int *)pbVar2 != DAT_ram_48237014) || (*(int *)(pbVar2 + 4) != DAT_ram_48237018)) ||
            (*(int *)(pbVar2 + 8) != DAT_ram_4823701c)) ||
           ((*(int *)(pbVar2 + 0xc) != DAT_ram_48237020 || (pbVar2[0x10] != DAT_ram_48237024))))
        goto LAB_ram_481595b6;
      }
      else if (*(int *)pbVar2 != DAT_ram_48237014) goto LAB_ram_481595b6;
    }
    else {
LAB_ram_481595b6:
      iVar3 = iVar5 * 0x14;
      iVar5 = iVar5 + 1;
      FUN_ram_4ff45158(iVar3 + param_2,pbVar2,0x14);
    }
LAB_ram_481595ce:
    pbVar2 = pbVar2 + 0x18;
    pbVar4 = pbVar4 + 1;
    if (pbVar2 == (byte *)(iVar1 + 0x94)) {
      return iVar5;
    }
  } while( true );
}


