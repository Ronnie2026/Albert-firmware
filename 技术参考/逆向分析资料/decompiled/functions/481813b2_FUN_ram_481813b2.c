/* Firmware entry: 0x481813b2 */

int FUN_ram_481813b2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  undefined2 uStack_3c;
  ushort uStack_3a;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_48 = 0;
  uStack_44 = 1;
  uStack_3c = 1;
  iVar1 = FUN_ram_48180a3c(&iStack_48,param_3,param_2);
  if (iVar1 == 0) {
    iStack_40 = 0;
    uStack_3a = 0;
    iVar1 = FUN_ram_48180ec2(&iStack_40,&iStack_48,&iStack_48,param_2);
    iVar2 = iStack_40;
    uVar3 = (uint)uStack_3a;
    if (iVar1 == 0) {
      uStack_4c = 1;
      uStack_34 = 0x10001;
      puStack_38 = &uStack_4c;
      iVar1 = FUN_ram_4818023e(&iStack_40,&puStack_38);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_4817bf84(&iStack_48,&iStack_48,param_3);
        if (iVar1 == 0) {
          uStack_4c = 1;
          uStack_34 = 0x10001;
          puStack_38 = &uStack_4c;
          iVar1 = FUN_ram_481804de(&iStack_48,&iStack_48,&puStack_38,0xffffffff);
          if (iVar1 == 0) {
            iVar1 = FUN_ram_481805fa(&iStack_40,0,&iStack_48,param_2);
            iVar2 = iStack_40;
            uVar3 = (uint)uStack_3a;
            if (iVar1 == 0) {
              iVar1 = FUN_ram_481804de(param_1,param_3,&iStack_40,0xffffffff);
            }
          }
        }
      }
      else {
        iVar1 = -0xe;
      }
    }
    if (iStack_48 == 0) goto LAB_ram_481813f4;
  }
  else {
    if (iStack_48 == 0) {
      return iVar1;
    }
    uVar3 = 0;
    iVar2 = 0;
  }
  FUN_ram_48178b14(iStack_48,(uStack_44 >> 0x10) << 2);
LAB_ram_481813f4:
  iStack_48 = 0;
  uStack_44 = 1;
  if (iVar2 != 0) {
    FUN_ram_48178b14(iVar2,uVar3 << 2);
  }
  return iVar1;
}


