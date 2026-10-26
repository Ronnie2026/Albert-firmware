/* Firmware entry: 0x4817cfb0 */

void FUN_ram_4817cfb0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  void *__s;
  undefined1 *puVar12;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (void *)(param_1 + 0x20);
  memset(__s,0,0x10);
  local_20 = 0;
  uStack_1c = 0;
  uStack_18._0_4_ = 0;
  uStack_18._4_4_ = 0;
  puVar12 = *(undefined1 **)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x144) != 0xc) {
    FUN_ram_4817cedc(param_1,puVar12,*(int *)(param_1 + 0x144),__s);
    uStack_18 = __bswapdi2(*(int *)(param_1 + 0x144) << 3,0);
    FUN_ram_4817cedc(param_1,&local_20,0x10,__s);
    return;
  }
  uVar1 = puVar12[0xb];
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  uVar5 = puVar12[4];
  uVar6 = puVar12[5];
  uVar7 = puVar12[6];
  uVar8 = puVar12[7];
  uVar9 = puVar12[8];
  uVar10 = puVar12[9];
  uVar11 = puVar12[10];
  *(undefined1 *)(param_1 + 0x20) = *puVar12;
  *(undefined1 *)(param_1 + 0x2b) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  *(undefined1 *)(param_1 + 0x22) = uVar3;
  *(undefined1 *)(param_1 + 0x23) = uVar4;
  *(undefined1 *)(param_1 + 0x24) = uVar5;
  *(undefined1 *)(param_1 + 0x25) = uVar6;
  *(undefined1 *)(param_1 + 0x26) = uVar7;
  *(undefined1 *)(param_1 + 0x27) = uVar8;
  *(undefined1 *)(param_1 + 0x28) = uVar9;
  *(undefined1 *)(param_1 + 0x29) = uVar10;
  *(undefined1 *)(param_1 + 0x2a) = uVar11;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return;
}


