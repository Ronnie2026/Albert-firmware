/* Firmware entry: 0x480646fc */

undefined8 FUN_ram_480646fc(int *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = 0;
  piVar6 = param_1;
  if (param_1[0x100] != 0) {
    do {
      if (param_2 == *piVar6) {
        if (param_2 == 0) {
LAB_ram_48064758:
          return *(undefined8 *)(param_1 + iVar7 * 4 + 2);
        }
        pbVar2 = (byte *)piVar6[1];
        pbVar5 = pbVar2 + param_2;
        pbVar4 = param_3;
        while( true ) {
          uVar1 = (uint)*pbVar2;
          pbVar2 = pbVar2 + 1;
          if ((uVar1 - 0x41 & 0xff) < 0x1a) {
            uVar1 = uVar1 + 0x20;
          }
          uVar3 = (uint)*pbVar4;
          pbVar4 = pbVar4 + 1;
          if ((uVar3 - 0x41 & 0xff) < 0x1a) {
            uVar3 = uVar3 + 0x20;
          }
          if (uVar3 != uVar1) break;
          if (pbVar2 == pbVar5) goto LAB_ram_48064758;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar7 != param_1[0x100]);
  }
  return 0;
}


