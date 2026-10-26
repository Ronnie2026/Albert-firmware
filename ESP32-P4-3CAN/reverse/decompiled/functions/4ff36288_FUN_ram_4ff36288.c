/* Firmware entry: 0x4ff36288 */

undefined4
FUN_ram_4ff36288(int param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int aiStack_44 [2];
  int iStack_3c;
  undefined1 auStack_38 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 + 0x68;
  bVar1 = false;
  aiStack_44[0] = param_7;
  do {
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    uVar3 = *(uint *)(param_1 + 8);
    if ((uVar3 & 2) == 0) {
      if (0 < *(int *)(param_1 + 0x38)) {
        uVar5 = *(uint *)(param_1 + 0x24);
        if (((*(uint *)(param_1 + 0x28) != uVar5) || (uVar5 = uVar3 & 4, uVar5 != 0)) &&
           (((uVar3 & 3) != 0 || ((*(uint *)(*(uint *)(param_1 + 0x28) + 4) & 8) != 0)))) {
          iStack_3c = 0;
          uVar3 = (**(code **)(param_1 + 0x14))
                            (param_1,&iStack_3c,0,param_4,uVar5,*(code **)(param_1 + 0x14));
          goto LAB_ram_4ff36326;
        }
      }
    }
    else if (((*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x2c)) &&
             (0 < *(int *)(param_1 + 0x38))) &&
            ((*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28) || ((uVar3 & 4) != 0)))) {
      iStack_3c = 0;
      uVar3 = (**(code **)(param_1 + 0x14))
                        (param_1,0,param_6,param_4,*(int *)(param_1 + 0x24),
                         *(code **)(param_1 + 0x14));
LAB_ram_4ff36326:
      uVar5 = *(uint *)(param_1 + 8);
      *param_2 = uVar3;
      if ((uVar5 & 1) != 0) {
        if (iStack_3c == 1) {
          uVar3 = (**(code **)(param_1 + 0x14))
                            (param_1,&iStack_3c,0,param_5,1,*(code **)(param_1 + 0x14));
          *param_3 = uVar3;
          if (*param_2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("ringbuf.c",0x361,"prvReceiveGeneric","*pvItem2 < *pvItem1");
          }
          if (iStack_3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("ringbuf.c",0x362,"prvReceiveGeneric",
                             "xIsSplit == ( ( BaseType_t ) 0 )");
          }
        }
        else {
          *param_3 = 0;
        }
      }
      FUN_ram_4ff3ee10(iVar2);
      return 1;
    }
    if (aiStack_44[0] == 0) {
LAB_ram_4ff362e0:
      FUN_ram_4ff3ee10(iVar2);
      return 0;
    }
    if (!bVar1) {
      FUN_ram_4ff3d530(auStack_38);
    }
    iVar4 = FUN_ram_4ff3d546(auStack_38,aiStack_44);
    if (iVar4 != 0) goto LAB_ram_4ff362e0;
    bVar1 = true;
    FUN_ram_4ff3d026(param_1 + 0x50,aiStack_44[0]);
    FUN_ram_4ff3ef0e();
    FUN_ram_4ff3ee10(iVar2);
  } while( true );
}


