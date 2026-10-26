/* Firmware entry: 0x480669fc */

int FUN_ram_480669fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [140];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 4);
  cVar1 = *(char *)(param_1 + 0xcc0);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 8);
  if (((cVar1 != '\0') && (*(int *)(param_1 + 0x89c) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x89c) + 0xc) != 0)) {
    pcVar5 = *(code **)(iVar2 + 0x30);
    if ((pcVar5 == (code *)0x0) || (iVar2 = (*pcVar5)(), iVar2 != 0)) {
      iVar2 = 2;
      do {
        fence();
        if ((DAT_ram_4ff5ce9c & 1) == 0) {
          uStack_cc = DAT_ram_4ff5cea0;
          iStack_c8 = DAT_ram_4ff5cea8;
          iStack_d4 = DAT_ram_4ff5ceac;
          iStack_d0 = DAT_ram_4ff5ceb0;
          uStack_c4 = DAT_ram_4ff5ceb4;
          fence();
          iVar2 = DAT_ram_4ff5cea4;
LAB_ram_48066acc:
          uVar6 = FUN_ram_4ff21a0a();
          DAT_ram_4ff5cea8 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
          DAT_ram_4ff5cea0 = 1;
          DAT_ram_4ff5cea4 = 9;
          DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
          DAT_ram_4ff5ceb4 = 0;
          DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
          DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
          *(int *)(param_1 + 0x8b8) = param_4;
          *(int *)(param_1 + 0x8b0) = param_5 + 1;
          *(int *)(param_1 + 0x8b4) = *(int *)(param_1 + 0x8b4) + param_4;
          if (param_4 != 0) {
            FUN_ram_4ff45158(param_1 + 0x8bc,param_3,param_4);
          }
          (**(code **)(*(int *)(param_1 + 0x89c) + 0xc))();
          pcVar5 = *(code **)(*(int *)(param_1 + 4) + 0x38);
          if ((pcVar5 == (code *)0x0) || (iVar3 = (*pcVar5)(param_5), iVar3 == 0)) {
            iVar3 = 0;
          }
          else if (param_5 != 0) {
            *(undefined1 *)(param_1 + 0xcc1) = 1;
          }
          if (iVar2 == 1) {
            uVar6 = FUN_ram_4ff21a0a();
            DAT_ram_4ff5cea8 = __divdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
            DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
            DAT_ram_4ff5ceb4 = 0;
            DAT_ram_4ff5cea0 = 1;
            DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
          }
          else {
            DAT_ram_4ff5cea0 = uStack_cc;
            DAT_ram_4ff5cea8 = iStack_c8;
            DAT_ram_4ff5ceac = iStack_d4;
            DAT_ram_4ff5ceb0 = iStack_d0;
            DAT_ram_4ff5ceb4 = uStack_c4;
          }
          DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
          DAT_ram_4ff5cea4 = iVar2;
          return iVar3;
        }
        if (iVar2 == 1) {
          uStack_c4 = 0;
          iStack_d0 = 0;
          iStack_d4 = 0;
          iStack_c8 = 0;
          iVar2 = 0;
          uStack_cc = 0;
          goto LAB_ram_48066acc;
        }
        iVar2 = 1;
      } while( true );
    }
    iVar2 = *(int *)(param_1 + 4);
    FUN_ram_4819ad74(auStack_c0,0x80,
                     "HTTP/1.1 %d Error\r\nContent-Length: 0\r\nConnection: close\r\nCache-Control: no-store\r\n\r\n"
                     ,0x191);
    iVar3 = FUN_ram_48136954(*(undefined4 *)
                              (*(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x40) * 0x1d40 + 0x10),
                             auStack_c0,0x55,8);
    if (((iVar3 < 0) && (piVar4 = (int *)FUN_ram_4819bf88(), *piVar4 != 0xb)) &&
       (piVar4 = (int *)FUN_ram_4819bf88(), *piVar4 != 0xb)) {
      FUN_ram_4819bf88();
    }
    iVar3 = *(int *)(iVar2 + 0x40) * 0x1d40;
    if (*(char *)(*(int *)(iVar2 + 0x4c) + iVar3 + 0x44c) != '\0') {
      FUN_ram_48065e9c(*(int *)(iVar2 + 0x4c) + iVar3 + 0x1c,3);
    }
  }
  return 0;
}


