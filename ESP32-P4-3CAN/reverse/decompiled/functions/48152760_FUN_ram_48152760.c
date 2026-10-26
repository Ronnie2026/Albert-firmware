/* Firmware entry: 0x48152760 */

void FUN_ram_48152760(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar3 = (byte *)*param_1;
  if ((*(uint *)(pbVar3 + 0x1248) & 3) == 0) {
    *(undefined4 *)(pbVar3 + 0x1250) = *(undefined4 *)(pbVar3 + 0x1208);
  }
  if ((((*(uint *)(pbVar3 + 0x1218) & 3) == 0) && ((*(uint *)(pbVar3 + 0x1200) & 3) != 0)) &&
     (*(int *)(pbVar3 + 0x1204) != 0)) {
    pbVar3 = pbVar3 + 0x11e4;
    pcVar7 = "Refused our IP address";
  }
  else if (*(int *)(pbVar3 + 0x121c) == 0) {
    pbVar3 = pbVar3 + 0x11e4;
    pcVar7 = "Could not determine local IP address";
  }
  else {
    bVar1 = *pbVar3;
    if ((*(int *)(pbVar3 + 0x1250) == 0) && ((bVar1 & 4) == 0)) {
      uVar5 = FUN_ram_48137fd6(0xa404040);
      *(undefined4 *)(pbVar3 + 0x1250) = uVar5;
      uVar2 = *(ushort *)(pbVar3 + 0x1218);
      bVar1 = *pbVar3;
    }
    else {
      uVar2 = *(ushort *)(pbVar3 + 0x1218);
    }
    if ((uVar2 & 0x100) == 0) {
      pbVar3[0x1224] = 0;
      pbVar3[0x1225] = 0;
      pbVar3[0x1226] = 0;
      pbVar3[0x1227] = 0;
    }
    if ((uVar2 & 0x200) == 0) {
      pbVar3[0x1228] = 0;
      pbVar3[0x1229] = 0;
      pbVar3[0x122a] = 0;
      pbVar3[0x122b] = 0;
    }
    if (((bVar1 & 1) != 0) && (*(int *)(pbVar3 + 0x1224) != 0 || *(int *)(pbVar3 + 0x1228) != 0)) {
      FUN_ram_4814cf60(pbVar3);
    }
    if ((*(int *)(pbVar3 + 0x1250) == 0) ||
       ((uVar4 = FUN_ram_48137fd6(), uVar4 >> 0x18 != 0x7f && ((uVar4 & 0xe0000000) != 0xe0000000)))
       ) {
      FUN_ram_4814d00a(pbVar3,*(uint *)(pbVar3 + 0x1248) >> 3 & 1,
                       *(uint *)(pbVar3 + 0x1248) >> 5 & 1,pbVar3[0x125e]);
      uVar5 = FUN_ram_4814d080(*(undefined4 *)(pbVar3 + 0x121c));
      iVar6 = FUN_ram_4814cf16(pbVar3,*(undefined4 *)(pbVar3 + 0x121c),
                               *(undefined4 *)(pbVar3 + 0x1250),uVar5);
      if ((iVar6 != 0) && (iVar6 = FUN_ram_4814d026(pbVar3), iVar6 != 0)) {
        *(undefined4 *)(pbVar3 + 0x1204) = *(undefined4 *)(pbVar3 + 0x121c);
        FUN_ram_48151cd0(pbVar3,0x21);
        pbVar3[0x22] = pbVar3[0x22] | 4;
        return;
      }
      pbVar3 = (byte *)(*param_1 + 0x11e4);
      pcVar7 = "Interface configuration failed";
    }
    else {
      pbVar3 = pbVar3 + 0x11e4;
      pcVar7 = "Unauthorized remote IP address";
    }
  }
  FUN_ram_481561ee(pbVar3,pcVar7);
  return;
}


