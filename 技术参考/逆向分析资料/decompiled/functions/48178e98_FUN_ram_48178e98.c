/* Firmware entry: 0x48178e98 */

undefined4
FUN_ram_48178e98(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined1 *param_5)

{
  char cVar1;
  size_t sVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iStack_28;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_28 = 0;
  auStack_24[0] = 0;
  if (param_1 == 0) {
    if ((param_2 <= param_4) && (10 < param_4 - param_2)) {
      sVar2 = (param_4 - param_2) - 3;
      param_5[1] = 1;
      *param_5 = 0;
      pvVar3 = memset(param_5 + 2,0xff,sVar2);
      puVar4 = (undefined1 *)((int)pvVar3 + sVar2);
      *puVar4 = 0;
      FUN_ram_4ff45158(puVar4 + 1,param_3,param_2);
      return 0;
    }
  }
  else {
    FUN_ram_4817697e();
    uVar5 = FUN_ram_48176d4c();
    if (((((uVar5 != 0) && (iVar6 = FUN_ram_481852a4(param_1,auStack_24,&iStack_28), iVar6 == 0)) &&
         (uVar5 == param_2)) &&
        ((iVar6 = iStack_28 + uVar5, iVar6 + 8U < 0x80 && (uVar5 + 10 <= iVar6 + 10U)))) &&
       ((iVar6 + 10U <= param_4 && (10 < (param_4 - iVar6) - 10)))) {
      sVar2 = (param_4 - iVar6) - 0xd;
      param_5[1] = 1;
      *param_5 = 0;
      pvVar3 = memset(param_5 + 2,0xff,sVar2);
      iVar6 = iStack_28;
      puVar4 = (undefined1 *)((int)pvVar3 + sVar2);
      puVar4[1] = 0x30;
      *puVar4 = 0;
      puVar4[3] = 0x30;
      cVar1 = (char)iStack_28;
      puVar4[2] = cVar1 + '\b' + (char)uVar5;
      puVar4[6] = cVar1;
      puVar4[4] = cVar1 + '\x04';
      puVar4[5] = 6;
      iVar7 = FUN_ram_4ff45158(puVar4 + 7,auStack_24[0],iStack_28);
      puVar4 = (undefined1 *)(iVar7 + iVar6);
      *puVar4 = 5;
      puVar4[1] = 0;
      puVar4[3] = (char)uVar5;
      puVar4[2] = 4;
      iVar6 = FUN_ram_4ff45158(puVar4 + 4,param_3,uVar5);
      if (param_5 + param_4 == (undefined1 *)(iVar6 + uVar5)) {
        return 0;
      }
      FUN_ram_48178af2(param_5,param_4);
    }
  }
  return 0xffffbf80;
}


