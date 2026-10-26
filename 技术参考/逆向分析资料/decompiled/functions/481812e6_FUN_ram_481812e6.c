/* Firmware entry: 0x481812e6 */

int FUN_ram_481812e6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined2 uStack_2c;
  ushort uStack_2a;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_38 = 0;
  uStack_2c = 1;
  uStack_34 = 1;
  iVar4 = FUN_ram_48180a3c(&iStack_38);
  if (iVar4 == 0) {
    iStack_30 = 0;
    uStack_2a = 0;
    iVar4 = FUN_ram_48180ec2(&iStack_30,&iStack_38,&iStack_38,param_3);
    iVar3 = iStack_30;
    iVar2 = iStack_38;
    uVar6 = (uint)uStack_2a;
    uVar1 = uStack_34 >> 0x10;
    if (iVar4 == 0) {
      puStack_28 = &uStack_3c;
      uStack_3c = 1;
      uStack_24 = 0x10001;
      iVar4 = FUN_ram_4818023e(&iStack_30,&puStack_28);
      if (iVar4 == 0) {
        iVar5 = FUN_ram_4817fe72(param_1,&iStack_38);
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = -0x10;
        }
      }
      else {
        iVar4 = -0xe;
      }
    }
    if (iVar2 != 0) {
      FUN_ram_48178b14(iVar2,uVar1 << 2);
    }
    if (iVar3 != 0) {
      FUN_ram_48178b14(iVar3,uVar6 << 2);
      return iVar4;
    }
  }
  else if (iStack_38 != 0) {
    FUN_ram_48178b14(iStack_38,(uStack_34 >> 0x10) << 2);
  }
  return iVar4;
}


