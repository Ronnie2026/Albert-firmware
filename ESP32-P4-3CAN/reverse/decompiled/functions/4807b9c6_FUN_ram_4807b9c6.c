/* Firmware entry: 0x4807b9c6 */

undefined4
FUN_ram_4807b9c6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48129c8a();
  iVar2 = FUN_ram_48129cd6();
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = __ltdf2(uVar3,uVar4,0,0);
  if (-1 < iVar1) {
    uVar5 = __floatundidf(param_3,param_4);
    iVar1 = __gtdf2(uVar3,uVar4,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (iVar1 < 1) {
      uVar5 = FUN_ram_48195bce(uVar3,uVar4);
      uVar6 = __floatundidf();
      iVar1 = __nedf2(uVar3,uVar4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      if (iVar1 == 0) {
        *param_5 = uVar5;
        return 1;
      }
    }
  }
  return 0;
}


