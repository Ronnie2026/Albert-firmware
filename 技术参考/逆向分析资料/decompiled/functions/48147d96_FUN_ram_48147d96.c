/* Firmware entry: 0x48147d96 */

void FUN_ram_48147d96(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (7 < *(ushort *)(param_1 + 10)) {
    pbVar5 = *(byte **)(param_1 + 4);
    iVar3 = FUN_ram_481519fc(param_1,0x3a,*(undefined2 *)(param_1 + 8),&DAT_ram_4ff6cdc8,
                             &DAT_ram_4ff6cde0);
    if (iVar3 == 0) {
      bVar1 = *pbVar5;
      if (bVar1 < 0x85) {
        if (0x81 < bVar1) {
          FUN_ram_48149cae(param_1,param_2);
          return;
        }
        if (bVar1 != 2) {
          if (bVar1 != 0x80) {
LAB_ram_48147e7e:
            FUN_ram_4813ac74(param_1);
            return;
          }
          if ((DAT_ram_4ff6cde0 != -1) &&
             (iVar3 = FUN_ram_4813ad9a(0x36,*(undefined2 *)(param_1 + 8),0x280), iVar3 != 0)) {
            iVar4 = FUN_ram_4813b37c(iVar3,param_1);
            if (iVar4 == 0) {
              puVar6 = *(undefined1 **)(iVar3 + 4);
              *puVar6 = 0x81;
              uVar2 = *(undefined2 *)(iVar3 + 8);
              puVar6[2] = 0;
              puVar6[3] = 0;
              uVar2 = FUN_ram_481519fc(iVar3,0x3a,uVar2,&DAT_ram_4ff6cde0,&DAT_ram_4ff6cdc8);
              puVar6[2] = (char)uVar2;
              puVar6[3] = (char)((ushort)uVar2 >> 8);
              FUN_ram_48149080(iVar3,&DAT_ram_4ff6cde0,&DAT_ram_4ff6cdc8,0xff,0,0x3a,param_2);
              FUN_ram_4813ac74(iVar3);
              goto LAB_ram_48147e7e;
            }
            FUN_ram_4813ac74(param_1);
            param_1 = iVar3;
          }
          goto LAB_ram_48147e9c;
        }
      }
      else if (3 < (byte)(bVar1 + 0x7a)) goto LAB_ram_48147e7e;
      FUN_ram_4814ad14(param_1,param_2);
      return;
    }
  }
LAB_ram_48147e9c:
  FUN_ram_4813ac74(param_1);
  return;
}


